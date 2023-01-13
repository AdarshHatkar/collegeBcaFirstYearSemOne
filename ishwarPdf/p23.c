/*
WAP to read and print a matrix.
*/

/*
we considering static matrix for simply city
but if we want dynamic matrix then we need to use dynamic memory allocation
*/
int matrixRows = 2;
int matrixColumns = 2;

#include <stdio.h>
void main()
{
    int matrix[matrixRows][matrixColumns];

    // reading matrix
    for (int i = 0; i < matrixRows; i++)
    {
        for (int j = 0; j < matrixColumns; j++)
        {
            printf("Enter value of position %d,%d\n", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // printing matrix
    printf("Matrix of %dx%d \n", matrixRows, matrixColumns);

    for (int i = 0; i < matrixRows; i++)
    {
        for (int j = 0; j < matrixColumns; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }
}