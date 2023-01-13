/*
WAP for prime number.
*/

/*
Property of Prime Number is it only divisible by one and it self
*/
/*
Logic:
if we want to check if any number is prime or not
we will mod it with all the numbers from 2 to number
*/

#include <stdio.h>
void main()
{
    int n, t = 0;
    printf("Enter Number \n");
    scanf("%d", &n);
    if (n < 2)
    {
        // special condition for 1 input
        t = t + 2;
    }
    for (int i = 2; i <= n; i++)
    {

        if (n % i == 0)
        {
            t++;
        }
    }
    if (t > 1)
    {
        printf("%d is not a prime Number", n);
    }
    else
    {
        printf("%d is prime Number", n);
    }
}