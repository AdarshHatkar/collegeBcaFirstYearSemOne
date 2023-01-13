/*
WAP to calculate subtraction of two numbers using function without argument and without return value.
*/
#include <stdio.h>
void sbt();

void main(){
    sbt();
}
void sbt(){
    int n1,n2;
    printf("Enter Number 1 \n");
    scanf("%d",&n1);
    printf("Enter Number 2 \n");
    scanf("%d",&n2);

    printf("Subtraction = %d", n1-n2);
    
}