/*
WAP to check given number is even or odd.
*/
#include <stdio.h>
void main()
{
    int n;
    // taking input from user
    printf("Enter Number \n");
    scanf("%d", &n);

    /*
    Logic if completely divisible by 2 then even otherwise odd
    */

    if (n % 2 == 0)
    {
        printf("%d is even number", n);
    }
    else
    {
        printf("%d is odd number", n);
    }
}