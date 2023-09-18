#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

char stack[SIZE];
int top = -1; // empty

int isEmpty()
{
    return top == -1;
}
void push(char num)
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
        printf("\n%c", stack[i]);
    }
}
char pop()
{
    if (isEmpty())
    {
        printf("\nStakc is empty");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}
void peep(int location)
{
    int index = top - location + 1;
    printf("\n%d", stack[index]);
}

char peek()
{
    return stack[top];
}

int main()
{
    int i, flag;
    char data[SIZE];
    char tmp;
    printf("\nEnter Sequence"); //[({  })]
    //[
    //(
    //{-> top
    gets(data);

    for (i = 0; data[i] != '\0'; i++)
    {
        if (data[i] == '{' || data[i] == '[' || data[i] == '(')
        {
            push(data[i]);
        }
        else if (data[i] == '}' || data[i] == ']' || data[i] == ')')
        {
            tmp = pop(); //{
            // data[i] => }
            if (tmp == '{' && data[i] == '}' || tmp == '[' && data[i] == ']' || tmp == '(' && data[i] == ')')
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        else
        {
            printf("!!! ERROR !!!!");
            exit(0);
        }
    }
    if (flag && isEmpty()) // 1 : true , 0:false
    {
        printf("\nVALID");
    }
    else
    {
        printf("\nINVALID");
    }
    //[[{}]]
    return 0;
}
