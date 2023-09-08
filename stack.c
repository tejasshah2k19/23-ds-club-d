#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1; // empty

void push(int num)
{
    if (top == SIZE - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        top++; //  0
        stack[top] = num;
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nStakc is empty");
    }
    else
    {
        printf("\n%d is pop", stack[top]);
        top--;
    }
}
void peep(int location)
{
    int index = top - location + 1;
    printf("\n%d", stack[index]);
}

void peek()
{
    printf("\n%d", stack[top]);
}

int main()
{

    return 0;
}
