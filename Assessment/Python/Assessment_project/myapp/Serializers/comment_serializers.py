# snippets/serializers/comment_serializer.py
from rest_framework import serializers
from myapp.models import Comment

class CommentSerializer(serializers.ModelSerializer):
    class Meta:
        model = Comment
        fields = '__all__'
