/*
Implementation of insertion technique in array
*/

#include <stdio.h>
void scanArr(int*,int);
void traverseArr(int*,int);
void main()
{

int arr[5]={1,54,75,48,45},sizeOFArr;
sizeOFArr = sizeof(arr)/sizeof(arr[0]);

// scanArr(&arr,sizeOFArr);

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

   
   printf("arr[%d]={");
   for (int i = 0; i < size; i++ ,arr++)
   {
    if(i != 0){
        printf(",");
    }
    printf("%d",*arr);
   }
   printf("}");
   
}