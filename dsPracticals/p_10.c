/*
implementation of recursive technique for finding of an integer
*/

#include <stdio.h>
int getFactorial(int);
void main()
{

    int n; 
    printf("Enter Number \n");
    scanf("%d",&n);
 
    
   printf("factorial of %d numbers is %d",n,getFactorial(n));
 

    
}
int getFactorial(int number){
if(number ==1){
    return 1;
}


 return  number* getFactorial(number-1);

}