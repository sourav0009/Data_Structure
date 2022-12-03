#include <stdio.h>
#include <stdlib.h>
void dispaly(int size, int ar[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", ar[i]);
    }
}
void deleation_1st(int size, int ar[])
{
    int i;
    printf("your finel array is");
    for (i = 0; i < size - 1; i++)
    {
        ar[i] = ar[i + 1];
    }
    size--;
    dispaly(size, ar);
}
void deleataion_pos(int size, int ar[])
{
    int i, pos;
    printf("enter the position");
    scanf("%d", &pos);
    printf("your finel array is");
    for (i = pos - 1; i < size - 1; i++)
    {
        ar[i] = ar[i + 1];
    }
    size--;
    dispaly(size, ar);
    printf("\n");
}
void deleation_last(int size, int ar[])
{
    int i;
    printf("your finel array is");
    for (i = 0; i < size; i++)
    {
        printf("%d", ar[i]);
    }
    size--;
    dispaly(size, ar);
    printf("\n");
}
void main()
{
    int i, size, ar[100], c;
    printf("enter the size\t");
    scanf("%d", &size);
    printf("enter the element\t");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("your eneter element is\t");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", ar[i]);
    }
    printf("\n");
    while (1)
    {
        printf("enter 1 for delet_1st\t enter 2 for delet_pos\t enter 3 for delet_last\t enter 4 for exist\t ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            deleation_1st(size, ar);
            break;
        case 2:
            deleataion_pos(size, ar);
            break;
        case 3:
            deleation_last(size, ar);
            break;
        case 4:
            printf("progrem end");
            exit(0);
        default:
            printf("wrong input");
        }
    }
}