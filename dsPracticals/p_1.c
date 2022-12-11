/*
Design program to find sum of N numbers
*/

#include <stdio.h>
void main()
{

    int n,sum=0; 
    printf("Enter Number \n");
    scanf("%d",&n);
    for (int i = n; i >0; i--)
    {
      sum = sum+i;
    }
    
   printf("Sum of %d numbers is %d",n,sum);
 

    
}