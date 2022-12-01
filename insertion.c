#include <stdio.h>
#include <stdlib.h>
void display(int size, int ar[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", ar[i]);
    }
}
void inscrtion_1st(int size, int ar[])
{
    int i, item;
    printf("enter the no");
    scanf("%d", &item);
    for (i = size - 1; i >= 0; i--)
    {
        ar[i + 1] = ar[i];
    }
    ar[0] = item;
    size++;
    display(size, ar);
}
void insertion_pos(int size, int ar[])
{
    int i, item, pos;
    printf("enter the no\t");
    scanf("%d", &item);
    printf("enter the pos\t");
    scanf("%d", &pos);
    for (i = size - 1; i >= pos - 1; i--)
    {
        ar[i + 1] = ar[i];
    }
    ar[pos - 1] = item;
    size++;
    display(size, ar);
}
void insertion_last(int size, int ar[])
{
    int i, item;
    {
    printf("enter the no\t");
    scanf("%d", &item);
    }
    ar[size] = item;
    size++;
    display(size, ar);
}
void main()
{
    int c, size, ar[100];
    printf("enter the size\t");
    scanf("%d",&size);
    printf("enter element\t");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("your enter element is\t");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
    while (1)
    {
        printf("enter 1 for insertion_1st\t enter 2 for insertion_pos\t enter 3 for insertion_last\t enter 4 for exist");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            inscrtion_1st(size, ar);
            break;
        case 2:
            insertion_pos(size, ar);
            break;
        case 3:
            insertion_last(size, ar);
            break;
        case 4:
            printf("program end");
            exit(0);
        default:
            printf("wrong input");
            break;
        }
    }
}
