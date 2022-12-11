/*
Implementation of traversing technique in array
*/

#include <stdio.h>
void traverseArr(int*,int);
void main()
{

int arr[10]={3,2,1,5},sizeOFArr;

sizeOFArr = sizeof(arr)/sizeof(arr[0]);

traverseArr(&arr,sizeOFArr);
 

    
}
void traverseArr(int *arr,int size){

   
   
   for (int i = 0; i < size; i++ ,arr++)
   {
    printf("%d \n",*arr);
   }
   
}