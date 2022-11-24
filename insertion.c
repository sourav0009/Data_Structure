#include<stdio.h>
void insertion_short(int ar[],int size,int temp)
{
    int i,j;
    for(int i=0;i<size;i++)
    {
        temp=ar[i];
        j=i-1;
        while(j>=0 && temp<ar[j])
        {
            ar[j+1]=ar[j];
            j--;
        }
       ar[j+1]=temp;
    }
    for( int i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
}

void main()
{
    int i,j,size,ar[100],temp;
    printf("enter the size ");
    scanf("%d",&size);
    printf("enter the element");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ar[i]);
    }
    
    printf("your array is");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("the inscration array is\n");
   insertion_short(ar,size,temp);
}