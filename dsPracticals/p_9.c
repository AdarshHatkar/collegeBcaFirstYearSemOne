/*
Implementation of List Data structure using array
*/

#include <stdio.h>
// defining list

int list[10], listSize = 10;

void create();
void display();
void insert();
void delete();
// void search();

void main()
{
    int ii;
startLabel:
    printf("\n--------------------------");
    printf("\nSelect an Option\n");
    printf("1.insert             2.delete\n");
    printf("3.display            4.exit\n");
    printf("5.create             6.search\n");

    scanf("%d", &ii);

    // below line is alternative of clrscr()
    // because vscode dont support clrscr
    printf("\033[H\033[J");
    // clrscr();

    switch (ii)
    {
    case 1:
        insert();
        goto startLabel;
        break;
    case 2:
        delete ();
        goto startLabel;
        break;
    case 3:
        display();
        goto startLabel;
        break;
    case 4:

        break;
    case 5:
        create();
        goto startLabel;
        break;
    case 6:

        break;

    default:
        printf("Invalid Option selected \n Try Again \n");
        goto startLabel;
        break;
    }
}
void create()
{
    int n;
    printf("Enter Number of Items \n");
    scanf("%d", &n);
    if (n <= 0 || n > listSize)
    {
        printf("Invalid Input Number must be From 1 to %d \n", listSize);
        printf("Try again \n");
        create();
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter %d element of list\n", i + 1);
            scanf("%d", &list[i]);
        }
    }
}
void display()
{
    printf("List =");
    for (int i = 0; i < listSize; i++)
    {
        printf(" %d ,", list[i]);
    }
    printf(" ;\n");
}
void insert()
{

    int pos, data;
    printf("Enter index Where data being inserted \n");
    scanf("%d", &pos);
    printf("Enter data Which being inserted \n");
    scanf("%d", &data);

    for (int i = listSize - 1; i > pos; i--)
    {
        list[i] = list[i - 1];
    }
    list[pos] = data;
}
void delete()
{

    int pos, data;
    printf("Enter index Where data being deleted \n");
    scanf("%d", &pos);
 

    for (int i = pos; i < listSize; i++)
    {
        list[i] = list[i + 1];
    }
}

// void search();
