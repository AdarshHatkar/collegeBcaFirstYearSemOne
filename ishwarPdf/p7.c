/*
WAP to print the name of days in week choosing number with the help switch case statement.
*/
#include <stdio.h>
void main()
{
    /*
    Logic:
    taking a number input from 1 to 7 and print name of day respective to that number
    we considering first day as sunday */
    int n;
    printf("Enter any Number From 1 to 7 \n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");

        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;

    default:
        printf("Entered Invalid number");
        break;
    }
}