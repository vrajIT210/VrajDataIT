Using MySQL
pip install pymysql
Step 2: Update settings.py
python
Copy
Edit
DATABASES = {
    'default': {
        'ENGINE': 'django.db.backends.mysql',
        'NAME': 'your_database_name',     # Replace with your DB name
        'USER': 'your_mysql_username',    # Replace with your MySQL user
        'PASSWORD': 'your_mysql_password',# Replace with your MySQL password
        'HOST': 'localhost',              # Or your DB host
        'PORT': '3306',                   # Default MySQL port
        'OPTIONS': {
            'init_command': "SET sql_mode='STRICT_TRANS_TABLES'",
        },
    }
}