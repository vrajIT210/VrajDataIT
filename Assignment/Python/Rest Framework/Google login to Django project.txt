 Step 1: Install Required Packages

pip install django-allauth
✅ Step 2: Add to INSTALLED_APPS
Edit your settings.py:
INSTALLED_APPS = [
    

    # Allauth apps
    'allauth',
    'allauth.account',
    'allauth.socialaccount',
    'allauth.socialaccount.providers.google',
]
Set the site ID (required for django.contrib.sites):

SITE_ID = 1
Step 3: Configure Authentication Backends
In settings.py:
AUTHENTICATION_BACKENDS = [
    'django.contrib.auth.backends.ModelBackend',
    'allauth.account.auth_backends.AuthenticationBackend',
]
Also, optionally configure login/logout redirects:
LOGIN_REDIRECT_URL = '/'
ACCOUNT_LOGOUT_REDIRECT_URL = '/'
Step 4: Update urls.py
In your main urls.py:

from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path('admin/', admin.site.urls),
    path('accounts/', include('allauth.urls')),  # Enables /accounts/login/, /accounts/google/login/, etc.
]
Step 5: Create Google OAuth Credentials
Go to the Google Developer Console.

Create a new project (or use an existing one).

Go to OAuth consent screen → fill out basic info.

Go to Credentials → Create OAuth 2.0 Client IDs.

Choose Web application

Add http://localhost:8000/accounts/google/login/callback/ to Authorized redirect URIs


Step 6: Add the Credentials in Django Admin
Run the server and go to the admin panel:
python manage.py runserver
Then:

Visit http://localhost:8000/admin/

Go to Sites → Edit example.com → Change domain name to localhost:8000

Go to Social applications → Add new:

Provider: Google

Name: anything (e.g., “Google Login”)

Client ID and Secret: paste from Google Developer Console

Sites: select your current site

Step 7: Try Google Login
Visit:
http://localhost:8000/accounts/login/
You should see a Google login option.

Optional: Customize Templates
Override the allauth templates by placing your custom HTML in:

templates/account/login.html
templates/socialaccount/signup.html
Enable template discovery in settings.py:

python
Copy
Edit
TEMPLATES = [
    {
        ...
        'DIRS': [BASE_DIR / 'templates'],
        ...
    },
]