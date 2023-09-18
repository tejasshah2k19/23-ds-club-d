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
int pop()
{
    if (top == -1)
    {
        printf("\nStakc is empty");
        return -1;
    }
    else
    {
        printf("\n%d is pop", stack[top]);

        return stack[top--];
    }
}
void peep(int location)
{
    int index = top - location + 1;
    printf("\n%d", stack[index]);
}

int peek()
{
    printf("\n%d", stack[top]);
    return stack[top];
}

int main()
{

    return 0;
}
