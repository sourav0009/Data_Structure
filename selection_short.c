#include<stdio.h>
#include<stdlib.h>
void selection_short(int size,int ar[],int item)
{
    int temp,i,j,min;
    for (int i = 0; i<size-1; i++)
    {
        min = i;
        for (int j = i+1 ; j < size; j++)
        {
            if (ar[j]<ar[min])
            {
                min=j;
            } 
        }
        if (min!=i)
        {
            temp=ar[i];
            ar[i]=ar[min];
            ar[min]=temp;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",ar[i]);
    }
}
void main()
{
    int i,j,size,ar[100],item;
    printf("enter the size");
    scanf("%d",&size);
    printf("enter the eleent");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("your enter array is");
    for(i=0;i<size;i++)
    {
        printf("%d",ar[i]);
    }
    printf("the shortded array is");
    selection_short(size,ar,item);
}