1. Project & App Setup
bash
Copy
Edit
django-admin startproject hospital
cd hospital
python manage.py startapp api
Add 'rest_framework' and 'api' to INSTALLED_APPS in hospital/settings.py.

INSTALLED_APPS = [
    ...
    'rest_framework',
    'api',
]
 2. Doctor Model
from django.db import models

class Doctor(models.Model):
    name = models.CharField(max_length=100)
    specialization = models.CharField(max_length=100)
    email = models.EmailField(unique=True)
    phone = models.CharField(max_length=20)

    def __str__(self):
        return self.name
Run migrations:


python manage.py makemigrations
python manage.py migrate
3. Create Serializer
from rest_framework import serializers
from .models import Doctor

class DoctorSerializer(serializers.ModelSerializer):
    class Meta:
        model = Doctor
        fields = '__all__'
4. Create API Views
You can use generics for a simple CRUD API:

from rest_framework import generics
from .models import Doctor
from .serializers import DoctorSerializer

class DoctorListCreateView(generics.ListCreateAPIView):
    queryset = Doctor.objects.all()
    serializer_class = DoctorSerializer

class DoctorRetrieveUpdateDestroyView(generics.RetrieveUpdateDestroyAPIView):
    queryset = Doctor.objects.all()
    serializer_class = DoctorSerializer
5. Set Up URLs

from django.urls import path
from .views import DoctorListCreateView, DoctorRetrieveUpdateDestroyView

urlpatterns = [
    path('doctors/', DoctorListCreateView.as_view(), name='doctor-list'),
    path('doctors/<int:pk>/', DoctorRetrieveUpdateDestroyView.as_view(), name='doctor-detail'),
]
And include this in your main project URLs:

from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path('admin/', admin.site.urls),
    path('api/', include('api.urls')),
]

python manage.py runserver