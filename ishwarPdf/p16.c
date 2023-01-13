/*
WAP to check whether the number is positive or negative.
*/
#include <stdio.h>
void main()
{
    // take number as input from user
    int n;
    printf("Enter any Number \n");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Number is Positive");
    }
    else if (n < 0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is zero");
    }
}