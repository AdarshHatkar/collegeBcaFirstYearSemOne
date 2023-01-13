/*
WAP for printing biggest from three number.
*/

/*
Logic:
taking 3 numbers one by one using for loop and compare then and print biggest number
*/
#include <stdio.h>
void main()
{
    int n, bn=0;
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter Number %d \n", i);
        scanf("%d",&n);

        if( n> bn){
            bn=n;
        }
    }

    printf("Biggest Number is %d\n",bn);
}