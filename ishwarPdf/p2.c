/*
WAP using for loop for printing 1 t0 100 odd number.
*/
#include<stdio.h>
void main(){

    printf("All Odd Numbers From 1 to 100 \n");
    for (int i = 1; i <= 100; i++)
    {
        /*
        Logic
        if we get zero as reminder when divide by 2 means number is even 
        so we using opposite of this  */
       if(i%2 !=0){
        printf("%d\n",i);
       }
    }
    
}