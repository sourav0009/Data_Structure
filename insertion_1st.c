#include<stdio.h>
#include<stdlib.h>

void display(int ar[],int size){
for( int i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
}
void insertion_1st(int ar[],int size)
{
    int i,item;
    {
    printf("enter the item which to be insert");
    scanf("%d",&item);
    }
    for(i=size-1;i>=0;i--)
    {
      ar[i+1]=ar[i];
    }
    ar[0]=item;
    size++;
    display(ar,size);
}
void main()
{
    int i,size,ar[100],item;
    printf("enter the size");
    scanf("%d",&size);
    printf("enter the element");
    for(i=0;i<size;i++)
    {
      scanf("%d",&ar[i]);
    }
    printf("your enter element is\t");
    for(i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
    insertion_1st(ar,size);
}