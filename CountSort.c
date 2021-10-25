#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void CountSort(int A[],int n)
{
    int k = A[0],i;
    for (i = 1; i < n; i++) {
        if (A[i] > k)
            k = A[i];
    }
    int count[10],B[10];
    
    // for (i = 0; i <= k; ++i) {
    //     count[i] = 0;
    // }        or
    memset(count,0,sizeof(count));

    for(i=0;i<n;i++)
    {
        count[A[i]]++;
    }
    for(i=1;i<=k;i++)
    {
        count[i]+=count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        B[--count[A[i]]] = A[i];
    }
    for(i=0;i<n;i++)
    {
        A[i]=B[i];
    }
}
int main()
{
    int A[]={2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
    int n = sizeof(A) / sizeof(A[0]);
    CountSort(A,n);
    int i;
    for( i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}