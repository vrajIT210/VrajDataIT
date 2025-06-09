# snippets/models.py
from django.db import models

class Snippet(models.Model):
    title = models.CharField(max_length=100)
    code = models.TextField()
    linenos = models.BooleanField(default=False)
    language = models.CharField(max_length=100, default='python')
    style = models.CharField(max_length=100, default='friendly')
    created = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return self.title

class Comment(models.Model):
    snippet = models.ForeignKey(Snippet, related_name='comments', on_delete=models.CASCADE)
    text = models.TextField()
    created = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f"Comment on {self.snippet.title}"