/*
Check the number is even or odd print it. If number is even then check the number is divisible by 4 or not, if number is odd check the number is divisible by 3 or not.
*/
#include <stdio.h>
void main()
{

    int n;
    printf("Enter Number \n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Number is Even \n");
        if (n % 4 == 0)
        {
            printf("Number is divisible by 4 \n");
        }
        else
        {
            printf("Number is not divisible by 4 \n");
        }
    }
    else
    {
        printf("Number is Odd \n");
        if (n % 3 == 0)
        {
            printf("Number is divisible by 3 \n");
        }
        else
        {
            printf("Number is not divisible by 3 \n");
        }
    }
}