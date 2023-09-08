#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int f = -1, r = -1; // q empty

void insert(int num)
{
    if (r == SIZE - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        if (f == -1)
            f++;
        r++;
        queue[r] = num;
    }
}

void display()
{
    int i;
    for (i = f; i <= r; i++)
    {
        printf(" %d", queue[i]);
    }
}
void delete()
{
    if (f == -1)
    {
        printf("\nQ is empty");
    }
    else if (f == r)
    {
        printf("\n%d is deleted", queue[f]);
        f = -1;
        r = -1;
    }
    else
    {
        printf("\n%d is deleted", queue[f]);
        f++;
    }
}

int main()
{

    return 0;
}