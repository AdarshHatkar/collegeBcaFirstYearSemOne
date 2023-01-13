/*
WAP to calculate subtraction of two numbers using function without argument and with return value.

*/
#include <stdio.h>
int sbt();

void main()
{
    int res;
    res = sbt();
    printf("Subtraction = %d", res);
}
int sbt()
{
    int n1, n2;
    printf("Enter Number 1 \n");
    scanf("%d", &n1);
    printf("Enter Number 2 \n");
    scanf("%d", &n2);
    return n1 - n2;
}