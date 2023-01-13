/*
WAP to display valid voter otherwise invalid voter.
*/
/*
Logic:
In india 18 is the minimum age for voting
so in our program we will take age as input from user and check
if is lower than 18 or greater than 18
*/
#include <stdio.h>
void main()
{
    int age;
    printf("Enter Your Age: \n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are a Valid Voter");
    }
    else
    {
        printf("You are a Invalid Voter");
    }
}