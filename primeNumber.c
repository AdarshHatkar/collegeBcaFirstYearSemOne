#include <stdio.h>
// In this program we are taking number from user and checking that this number is prime or not
void main()
{
    int number, i, k = 0;
    printf("Enter a number \n");
    scanf("%d", &number);

    for (i = 2; i < number; i++)
    {

        if (number % i == 0)
        {
            k = 1;
        }
    }

    if (k != 1)
    {
        printf("%d is Prime Number", number);
    }
    else
    {
        printf("%d is not a Prime Number", number);
    }
}