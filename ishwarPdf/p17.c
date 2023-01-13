/*
WAP to enter marks of student in array.
*/
/*
we are collecting 5 marks  students

 */

#include <stdio.h>
void main()
{
    int studentMarks[5];
    // storing marks in array
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Marks of Student %d \n", i + 1);
        scanf("%d", &studentMarks[i]);
    }

    // printing marks from array
    printf("Marks Of All Students \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d Marks = %d \n", i + 1, studentMarks[i]);
    }
}