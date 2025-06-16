from django.shortcuts import render, redirect
from django.contrib.auth import login, logout, authenticate
from django.contrib.auth.decorators import login_required
from .forms import RegisterForm, AppointmentForm
from .models import Doctor, Appointment

def index(request):
    return render(request, 'healthapp/index.html')

def register(request):
    if request.method == 'POST':
        form = RegisterForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect('login')
    else:
        form = RegisterForm()
    return render(request, 'healthapp/register.html', {'form': form})

def login_view(request):
    if request.method == 'POST':
        uname = request.POST['username']
        pwd = request.POST['password']
        user = authenticate(username=uname, password=pwd)
        if user:
            login(request, user)
            return redirect('profile')
    return render(request, 'healthapp/login.html')

@login_required
def profile(request):
    return render(request, 'healthapp/profile.html')

def logout_view(request):
    logout(request)
    return redirect('login')

@login_required
def doctor_list(request):
    doctors = Doctor.objects.all()
    return render(request, 'healthapp/doctors_list.html', {'doctors': doctors})

@login_required
def book_appointment(request):
    if request.method == 'POST':
        form = AppointmentForm(request.POST)
        if form.is_valid():
            app = form.save(commit=False)
            app.user = request.user
            app.save()
            return redirect('profile')
    else:
        form = AppointmentForm()
    return render(request, 'healthapp/appointments.html', {'form': form})
 