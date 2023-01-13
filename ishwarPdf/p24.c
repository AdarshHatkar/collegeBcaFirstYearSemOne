/*
WAP for sum of n number using array.
*/

/*
Note:
1] First of all this program is nonsense  because there is no need of array to get sum for n numbers

2] we are using dynamic array for this program because we need to use array for no valid reason
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, sum = 0;
    int *arr;
    // taking count from user to allocate dynamic array
    printf("Enter Count of Numbers\n");
    scanf("%d", &n);
    // allocating dynamic array
    arr = (int *)malloc(n * sizeof(int));

    // getting n numbers in dynamic array
    for (int i = 0; i < n; i++)
    {
        printf("Enter Number %d \n", i + 1);
        scanf("%d", &arr[i]);
    }

    // calculating sum using array
    for (int i = 0; i < n; i++)
    {

        sum = sum + arr[i];
    }
    free(arr);

    printf("sum = %d", sum);
}