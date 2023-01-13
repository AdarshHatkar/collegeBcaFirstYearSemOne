/*
WAP to find factorial of n.
*/
#include <stdio.h>
void main()
{
    int fact = 1, n;
    // taking input from user
    printf("Enter Number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is %d", n, fact);
}