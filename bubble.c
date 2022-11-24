#include<stdio.h>
#include<stdlib.h>
void bubble_short(int size,int ar[],int temp)
{
    int i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(ar[j+1]<ar[j])
            {
                temp=ar[j+1];
                ar[j+1]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
    
}
void main()
{
    int i,j,size,ar[100],temp;
    printf("enter the size\t");
    scanf("%d",&size);
    printf("enter the element\t");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("the array is\t");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("your bubble short is");
    bubble_short(size,ar,temp);

}