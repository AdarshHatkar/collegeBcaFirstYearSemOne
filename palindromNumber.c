#include <stdio.h>
int powerOfInt(int, int);
int digitsInInt(int);
int isIntEven(int);
void main()
{

    int userInput;
    // printf("%d", isIntEven(100));
    // printf("enter any Number \n => ");
    // scanf("%i",&userInput);
}

int powerOfInt(int base, int power)
{
    int result = 1;
    for (int i = power; i > 0; i--)
    {
        result *= base;
        --power;
    }

    return result;
}

int digitsInInt(int number)
{
    int digits = 0, result;

    for (int i = 0; i < 10; i++)
    {

        result = number / powerOfInt(10, i);
        if (result == 0)
        {
            break;
        }
        digits++;
    }
    return digits;
}
int isIntEven(int number)
{
    int result = 0;
    if (number % 2 == 0)
    {
        result = 1;
    }
    return result;
}