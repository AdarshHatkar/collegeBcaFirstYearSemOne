/*
Design program to find factorial of N numbers
*/

#include <stdio.h>
void main()
{

    int n,factorial=1; 
    printf("Enter Number \n");
    scanf("%d",&n);
    for (int i = n; i >1; i--)
    {
      factorial = factorial *i;
    }
    
   printf("factorial of %d numbers is %d",n,factorial);
 

    
}