/*
Design program to find greatest among three given number
*/

#include <stdio.h>
void main()
{

    int numbers[3],greatestIndex=0; 
    
    for (int i = 0; i <3; i++)
    {
     printf("Enter %d Number \n",i+1);
    scanf("%d",&numbers[i]);
    if(numbers[greatestIndex]<numbers[i])
    greatestIndex = i;
    }
    
   printf("greatest among three given number is %d",numbers[greatestIndex]);
 

    
}