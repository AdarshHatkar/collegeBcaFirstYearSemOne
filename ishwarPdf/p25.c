/*
WAP for printing 2D array.
*/

int rows = 2;
int columns = 2;

#include <stdio.h>
void main()
{
    int array[rows][columns];

    // reading array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter value of array[%d][%d]\n", i , j );
            scanf("%d", &array[i][j]);
        }
    }

    // printing array
    printf("Printing 2D Array\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("array[%d][%d]=%d\n", i, j, array[i][j]);
        }
    }
}