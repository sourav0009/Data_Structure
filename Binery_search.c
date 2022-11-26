#include<stdio.h>
#include<stdlib.h>

void binery_search(int size,int ar[],int item)
{
    int low,mid,high,flag=0;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ar[mid]==item)
        {
            printf("item found %d index",mid);
            flag=1;
            break;
        }
        else if(ar[mid]<item)
        {
            low=mid+1;
        }
        else if(ar[mid]>item)
        {
            high=mid-1;
        }
    }
    if(flag==0)
    {
        printf("item not found");
    }
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
    printf("enter the element to be scarch");
    scanf("%d",&item);
    binery_search(size,ar,item);
}