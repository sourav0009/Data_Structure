// quick_short
#include<stdio.h>
#include<stdlib.h>
int quick_sort(int A[],int l,int u)
{
    if(l<=u){
        int pos=partition(A,l,u);
        quick_sort(A,l,pos-1);
        quick_sort(A,pos+1,u);
    }
}
int partition(int A[],int l,int u){
    int i,j,temp,pos;
    i=l;
    j=u;
    pos=l;
    while (1)
    {
        while (A[pos]<A[j] && pos!=j)
        {
            j=j-1;
        }
        if(pos==j){
            return pos;
        }
        if(A[pos]>A[j])
        {
            temp=A[pos];
            A[pos]=A[j];
            A[j]=temp;
            pos=j;
        }
        while (A[pos]>A[i] && pos!=i)
        {
            i=i+1;
        }
        if(pos==i){
            return pos;
        }
        if(A[pos]<A[i]){
            temp=A[pos];
            A[pos]=A[i];
            A[i]=temp;
            pos=i;
        }
    }
    return (i+1);
}
void main()
{
    int A[1000],size,i;
    printf("Enter size of the array");
    scanf("%d",&size);
    printf("ENter element in the array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<size;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
    printf("The sorted array is \n");
    quick_sort(A,0,size-1);
      for(i=0;i<size;i++){
        printf("%d\t",A[i]);
      }
}