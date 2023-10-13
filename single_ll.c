#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;
    struct node *last = NULL;
    int choice, num;
    while (1)
    {
        printf("\n1 For Add Node");
        printf("\n2 For List");
        printf("\n3 Exit");
        printf("\nEnter your choice");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the number");
            scanf("%d", &num);

            if (head == NULL)
            {
                head = (struct node *)malloc(sizeof(struct node)); // 42byte
                head->data = num;                                  // 30
                head->next = NULL;
                last = head;
            }
            else
            {
                struct node *tmp = (struct node *)malloc(sizeof(struct node));
                tmp->data = num; // 40
                tmp->next = NULL;
                last->next = tmp;
                last = tmp;
            }
            break;

        default:
            break;
        }
    }

    return 0;
}