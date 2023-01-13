/*
WAP to swap two numbers using function with argument without return value.
*/
/*
Note:
We will use pointer to make program sensible
*/

#include <stdio.h>

void swap(int *, int *);

void main()
{
    int a, b;
    printf("Enter value of a\n");
    scanf("%d", &a);
    printf("Enter value of b\n");
    scanf("%d", &b);

    printf("Before Swapping\n");
    printf("a=%d & b=%d\n", a, b);

    swap(&a, &b);

    printf("After Swapping\n");
    printf("a=%d & b=%d\n", a, b);
}

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}