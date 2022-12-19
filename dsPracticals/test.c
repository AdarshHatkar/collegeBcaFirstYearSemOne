#include<stdio.h>
int a=10;
void fun();
void main(){
    printf("%d \n",a);
    a++;
    fun();
    printf("%d \n",a);

}
void fun(){
    a++;
}