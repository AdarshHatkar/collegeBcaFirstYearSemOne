#include<stdio.h>

int main()
{

   int kilogramVal;

printf("enter value of kg to convert\n");

scanf("%d",&kilogramVal);

int gramVal=kilogramVal*1000;

    printf("%i kg= %i gram", kilogramVal, gramVal);
    return 0;
}