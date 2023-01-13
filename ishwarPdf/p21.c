/*
WAP to calculate subtraction of two numbers using function with argument and with return value.

*/
#include <stdio.h>
int sbt(int, int);

void main()
{
    int res, n1, n2;

    printf("Enter Number 1 \n");
    scanf("%d", &n1);
    printf("Enter Number 2 \n");
    scanf("%d", &n2);
    res = sbt(n1, n2);
    printf("Subtraction = %d", res);
}
int sbt(int n1, int n2)
{

    return n1 - n2;
}