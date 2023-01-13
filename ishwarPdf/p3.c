/*
WAP for printing area of rectangle.
*/

#include<stdio.h>
void main()
{
    /*
       formula:
       Area = Hight x Length
       */
    int a, h, l;
    printf("Enter Height of Rectangle in cm \n");
    scanf("%d", &h);
    printf("Enter Length of Rectangle in cm \n");
    scanf("%d", &l);

    a = l * h;
    printf("area = %d cm Square", a);
}
