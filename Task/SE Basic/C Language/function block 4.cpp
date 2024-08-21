#include <stdio.h> 
 
int sum(int a, int b) 
{ 
    int c; 
    c = a + b; 
   
    return c; 
} 

int main() 
{ 
    int a=3, b=2; 
 
    int c = sum(a,b); 
    printf("Sum of %d and %d : %d", a, b, c); 
  
    return 0; 
}
