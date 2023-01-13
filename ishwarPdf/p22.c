/*
WAP to print factorial of n using recursion.
*/

#include <stdio.h>

int fact(int);

void main()
{
    int n;
    printf("Enter Any Number \n");
    scanf("%d", &n);

    printf("Factorial of %d is %d\n", n, fact(n));
}

int fact(int n)
{
    // base case
    if (n < 1)
    {
        return 1;
    }
    // recursive case
    return n * fact(n - 1);
}