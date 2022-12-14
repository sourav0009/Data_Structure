#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *link;
};

struct list *creation(struct list *head)
{
    struct list *new, *temp;
    new = (struct list *)malloc(sizeof(struct list));
    if (new != NULL)
    {
        printf("Enter item\t");
        scanf("%d", &new->data);
        new->link = NULL;
        if (head == NULL)
        {
            head = new;
        }
        else
        {
            temp = head;
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = new;
        }
    }
    else
    {
        printf("No memory\n");
    }
    return head;
}
void traverse(struct list *head)
{
    struct list *temp;
    if (head != NULL)
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
    else
    {
        printf("No item to be traversed\n");
    }
}
struct list *delete_pos(struct list *head)
{
    struct list *temp, *prev;
    int count = 1, pos;
    temp = head;
    if (head != NULL)
    {
        printf("Enter the position where you want to be deleted\t");
        scanf("%d", &pos);
        while (count < pos)
        {
            prev=temp;
            temp = temp->link;
            count ++;
        }
        prev->link = temp->link;
        free(temp);
    }
    else{
        printf("No item to delete\n");
    }
    return head;
}
void main()
{
    int c;
    struct list *head = NULL, *temp;
    while (1)
    {
        printf("Enter 1 for creation\t 2 for traversal\t 3 for delete pos \t  4 for exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            head = creation(head);
            break;
        case 2:
            traverse(head);
            break;
        case 3:
            head = delete_pos(head);
            break;
        case 4:
            printf("Program end");
            exit(0);
        default:
            printf("Wrong choice");
        }
    }
}