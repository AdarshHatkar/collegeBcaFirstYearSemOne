/*
WAP for Greatest of two number.
*/
/*
Logic:
taking 2 numbers one by one using for loop and compare then and print biggest number
*/

#include <stdio.h>
void main()
{
    int n, bn = 0;
    for (int i = 1; i <= 2; i++)
    {
        printf("Enter Number %d \n", i);
        scanf("%d", &n);

        if (n > bn)
        {
            bn = n;
        }
    }

    printf("Biggest Number is %d\n", bn);
}