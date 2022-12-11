/*
Implementation of traversing technique in array
*/

#include <stdio.h>
void scanArr(int*,int);
void traverseArr(int*,int);
void main()
{

int arr[5],sizeOFArr;



sizeOFArr = sizeof(arr)/sizeof(arr[0]);

scanArr(&arr,sizeOFArr);

traverseArr(&arr,sizeOFArr);
 

    
}
void scanArr(int *arr,int size){

   
   
   for (int i = 0; i < size; i++ ,arr++)
   {
    printf("enter value of arr[%i] \n",i);
    scanf("%d",arr);
   }
   
}
void traverseArr(int *arr,int size){

   
   printf("Result of traversing \n \n");
   for (int i = 0; i < size; i++ ,arr++)
   {
    printf("%d \n",*arr);
   }
   
}