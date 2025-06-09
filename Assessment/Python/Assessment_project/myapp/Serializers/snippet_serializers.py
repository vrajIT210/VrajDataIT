# snippets/serializers/snippet_serializer.py
from rest_framework import serializers
from myapp.models import Snippet

class SnippetSerializer(serializers.ModelSerializer):
    class Meta:
        model = Snippet
        fields =  fields = ['id', 'title', 'code', 'linenos', 'language', 'style']
