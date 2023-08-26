/*


        1. insert
        2. list
        3. remove
        4. exit

        int a[5] -> a[0] a[1] a[2] a[3] a[4]

        0   1    2    3   4
        30  200  10

        insert(10,2)
        insert(20,1)
        insert(30,1)
        insert(200,3)

        remove(2)

        list()
            30 200 10
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int array[SIZE];

void insert(int num, int location) // 10,3 {10,2index}
{
    int i;
    if (location > SIZE || location < 1) // 0
    {
        printf("\nInvalid Loaction");
    }
    else
    {
        for (i = SIZE - 1; i != location - 1; i--)
        {
            array[i] = array[i - 1];
        }
        array[i] = num;
    }
}

void display()
{
    int i;
    printf("\nElements in the Array\n");
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", array[i]);
    }
}

int main()
{

    int choice;
    int location, num;
    while (1) // 0 -> false -1 -2 2 43 5 -> true
    {
        printf("\n1 For insert\n2 For Display\n0 For Exit\nEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number and location");
            scanf("%d%d", &num, &location);

            insert(num, location);
            break;
        case 2:
            display();
            break;
        case 0:
            exit(0);
        default:
            printf("\nPTAG");
            break;
        } // switch
    }     // while
    return 0;
}
