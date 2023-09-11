#include <stdio.h>
#define SIZE 5

int q[SIZE];
int f = -1;
int r = -1;

void insert(int num)
{
    if (r == SIZE - 1 && f == 0)
    {
        printf("\nQueue is Full");
    }
    else if (r == f - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        if (r == SIZE - 1)
        {
            r = 0;
            q[r] = num;
        }
        else
        {
            r++;
            q[r] = num;
        }
        if (f == -1)
            f++;
    }
}

void remove()
{
    if (f == -1)
    {
        printf("Q is Empty");
    }
    else
    {

        printf("\n%d deleted", q[f]);
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else if (f == SIZE - 1)
        {
            f = 0;
        }
        else
        {
            f++;
        }
    }
}

void display()
{
    int i;
    printf("\nElements in the queue");
    if (f <= r)
    {
        for (i = f; i <= r; i++)
        {
            printf("  %d", q[i]);
        }
    }
    else
    {

        for (i = f; i < SIZE - 1; i++)
        {
            printf(" %d", q[i]);
        }
        for (i = 0; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
}

int main()
{

    return 0;
}