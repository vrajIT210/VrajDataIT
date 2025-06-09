# snippets/logic/business_logic.py
def validate_snippet_data(data):
    if not data.get('title') or not data.get('code'):
        raise ValueError("Both title and code are required fields.")

