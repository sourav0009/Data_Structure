#include<stdio.h>
#include<stdlib.h>
void display(int ar[],int size){
    for(int i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
}
void insertion_last(int ar[],int size)
{
    int item;
    printf("enter the no\t");
    scanf("%d",&item);
    ar[size]=item;
    size++;
    display(ar,size);
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
    insertion_last(ar,size);
}