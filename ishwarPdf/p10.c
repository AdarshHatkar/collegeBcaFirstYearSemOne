/*
WAP to calculate total marks and percentage of a student.
*/
/*
Logic:
we taking marks for 3 subject out of 100
and do further calculation according to this
Formula:
Percentage = (obtained marks / total marks ) * 100

*/

#include <stdio.h>
void main()
{
    float percentage, total, english, science, math;
    printf("Enter the Marks of English out of 100 \n");
    scanf("%f", &english);
    printf("Enter the Marks of Science out of 100 \n");
    scanf("%f", &science);
    printf("Enter the Marks of Math out of 100 \n");
    scanf("%f", &math);

    // calculation
    total = english + science + math;
    percentage = (total / 300) * 100;
    printf("Total obtained Marks = %f \n", total);
    printf("Percentage = %f \n", percentage);
}