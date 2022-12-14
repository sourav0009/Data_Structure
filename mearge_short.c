// mearge_short
#include<stdio.h>
#include<stdlib.h>
void merge_sort(int A[],int l,int u){
    int mid;
    if(l<u){
        mid=(l+u)/2;
        merge_sort(A,l,mid);
        merge_sort(A,mid+1,u);
        merge(A,l,u,mid);
    }
}
void merge(int A[],int l,int u,int mid){
    int i,j,k,c[100];
    i=l;
    j=mid+1;
    k=l;
    while (i<=mid && j<=u)
    {
        if(A[i]<A[j]){
            c[k]=A[i];
            i+=1;
            k+=1;
        }
        else if(A[i]>=A[j]){
            c[k]=A[j];
            j+=1;
            k+=1;
        }
    }
    while (i<=mid)
    {
        c[k]=A[i];
        i+=1;
        k+=1;
    }
    while (j<=u)
    {
        c[k]=A[j];
        j+=1;
        k+=1;
    }
    for(i=l;i<=u;i++){
        A[i]=c[i];
    } 
}
void main(){
    int A[100],i,size;
    printf("ENter the size of the array");
    scanf("%d",&size);
    printf("Enter element in the array");
    for(i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<size;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
    printf("The sorted array is\n");
    merge_sort(A,0,size-1);
    for(i=0;i<size;i++){
        printf("%d\t",A[i]);
    }
}