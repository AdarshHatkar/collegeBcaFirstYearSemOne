/* Reversing the number */
#include <stdio.h>
void main()
{
    int number, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);


    while (number != 0)
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;

        printf("r=%d rv=%d n=%d \n",remainder,reversed,number);
    }
}