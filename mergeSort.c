#include<stdio.h>

void merge(int A[],int lb,int mid,int ub)
{
    int B[ub-lb+1],i,j,k;
    i=lb;
    j=mid+1;
    k=0;
    while(i<=mid && j<=ub)
    {
        if(A[i]<=A[j])
        {
            B[k]=A[i];
            i++;
        }
        else
        {
            B[k]=A[j];
            j++;
        }
        k++;
    }
    
    while(j<=ub)
    {
        B[k]=A[j];
        j++;
        k++;
    }
    while(i<=mid)
    {
        B[k]=A[i];
        i++;
        k++;
    }
    i=0;
    for(k=lb;k<=ub;k++)
    {
        A[k]=B[i];
        i++;
    }
}

void mergeSort(int A[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        mergeSort(A,lb,mid);
        mergeSort(A,mid+1,ub);
        merge(A,lb,mid,ub);
    }
}
int main()
{
    int A[]={11,9,15,3,55,88,44,11,22,33,44,55};
    mergeSort(A,0,11);
    for(int i=0;i<12;i++)
    {
        printf("\t%d",A[i]);
    }
    return 0;
}