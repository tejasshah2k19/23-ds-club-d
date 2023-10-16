#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *last = NULL; // last
void addNode(int num)         // 30 40  50
{
    // insert last
    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node)); // calloc malloc 2000-2008 5000
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        struct node *tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}
void addBeg(int num)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = num;
    tmp->next = head;
    head = tmp;
}
void display()
{
    struct node *p;
    p = head;

    while (p != NULL)
    {
        printf("%d->", p->data);
        p = p->next;
    }
}
int main()
{

    int choice, num;

    while (1)
    {

        printf("\n0 For Exit\n1 For Add\n2 For Display\n3 For Add Beg\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            addNode(num);
            break;
        case 2:
            display();
            break;
        case 3:
            printf("\nEnter number");
            scanf("%d", &num);
            addBeg(num);
            break;
        case 0:
            exit(0);
        default:
            printf("\nInvalid Choice PTA!!!");
        }
    }
    return 0;
}