#include<stdio.h>
#include<stdlib.h>
void display(int size,int ar[])
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
}
void deletaion_last(int size,int ar[])
{
    int i;
    printf("your finel array is");
    for(i=0;i<size-1;i++)
    {
        printf("%d\t",ar[i]);
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
    deletaion_last(size,ar);
}