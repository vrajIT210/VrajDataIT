from django.urls import path
from . import views

urlpatterns = [
    path('myapp/', views.snippet_list),
    path('myapp/<int:pk>/', views.snippet_detail),
    path('comments/', views.comment_list),
]