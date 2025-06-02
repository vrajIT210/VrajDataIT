settings.py

REST_FRAMEWORK = {
    'DEFAULT_PAGINATION_CLASS': 'rest_framework.pagination.PageNumberPagination',
    'PAGE_SIZE': 5,
}

Test Pagination
Start your server:
python manage.py runserver
Then visit:
http://127.0.0.1:8000/api/doctors/?page=1
{
    "count": 23,
    "next": "http://127.0.0.1:8000/api/doctors/?page=2",
    "previous": null,
    "results": [
        {
            "id": 1,
            "name": "Dr. Vraj Patel",
            "specialization": "Cardiology",
            ...
        },
        ...
    ]
}