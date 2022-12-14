#include<stdio.h>
#include<stdlib.h>
void display(int size,int ar[])
{
    for( int i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
}
void insertion_pos(int size,int ar[])
{
    int i,item,pos;
    printf("enter the no\t");
    scanf("%d",&item);
    printf("enter the pos\t");
    scanf("%d",&pos);
    for(i=size-1;i>=pos-1;i--)
    {
      ar[i+1]=ar[i];
    }
    ar[pos-1]=item;
    size++;
    display(size,ar);
}
void main()
{
     int i,item,ar[100],size;
    printf("enter the size\t");
    scanf("%d",&size);
    printf("enter the element");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    insertion_pos(size,ar);
}