/*
WAP using for loop for printing table of n number.
*/

#include<stdio.h>
void main(){

  int n;
  // taking input from user
  printf("Enter the Number\n");
  scanf("%d",&n);

  // using loop for printing table
 printf("Table of %d\n",n);
  for(int i=1; i<=10; i++){
    printf("%d * %d = %d \n",n,i,n*i);
  }
}