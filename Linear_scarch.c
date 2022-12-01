#include<stdio.h>
#include<stdlib.h>
void linear_search(int size,int ar[],int item)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(ar[i]==item)
        {
            break;
        }
        if(i<size)
        {
            printf("%d found %d index",item,i);
        }
        else{
            printf(" not found");
        }
    }
}
void main()
{
    int i,size,ar[100],item;
    printf("enter the size of element");
    scanf("%d",&size);
    printf("enter the element");
    for(i=0;i<size;i++)
    {
        printf("%d",ar[i]);
    }
    printf("enmter the element to be scarch");
    scanf("%d",&item);
    linear_search(size,ar,item);
}