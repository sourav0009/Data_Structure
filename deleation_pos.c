#include<stdio.h>
#include<stdlib.h>
void display(int size,int ar[])
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
}
void deletaion_pos(int size,int ar[])
{
    int i,pos;
    printf("enter the position");
    scanf("%d",&pos);
    printf("yout finel arry is");
    for(i=pos-1;i<size-1;i++)
    {
        ar[i]=ar[i+1];
    }
    size--;
    display(size,ar);
}
void main()
{
    int i,size,ar[100];
    printf("enter the size\t");
    scanf("%d",&size);
    printf("enter the element\t");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("your enter array is\t");
    for(i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
    deletaion_pos(size,ar);
}
