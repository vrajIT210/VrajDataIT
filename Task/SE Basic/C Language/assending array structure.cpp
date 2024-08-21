#include <stdio.h>

struct mystruct 
{
    int a[5];
    int i, j, temp;
};

int main() {
    struct mystruct s1;

    // Taking input for the array
    printf("Enter 5 numbers:\n");
    for (s1.i = 0; s1.i < 5; s1.i++) {
        scanf("%d", &s1.a[s1.i]);
    }

    // Sorting the array using bubble sort
    for (s1.i = 0; s1.i < 4; s1.i++) {
        for (s1.j = s1.i + 1; s1.j < 5; s1.j++) {
            if (s1.a[s1.i] > s1.a[s1.j]) {
                s1.temp = s1.a[s1.i];
                s1.a[s1.i] = s1.a[s1.j];
                s1.a[s1.j] = s1.temp;
            }
        }
    }

    // Printing the sorted array
    printf("Sorted array is:\n");
    for (s1.i = 0; s1.i < 5; s1.i++) 
	{
        printf("%d ", s1.a[s1.i]);
    }

    return 0;
}
