#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int getmax(int A[],int n)
{
    int max=A[0],i;
    for (i = 1; i < n; i++) {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}
void CountSort(int A[],int n,int pos)
{
    int k = 9,i;
    int count[10],B[10];
    memset(count,0,sizeof(count));  //all value set to 0

    for(i=0;i<n;i++)
    {
        count[(A[i]/pos)%10]++;
    }
    for(i=1;i<=k;i++)
    {
        count[i]+=count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        B[--count[(A[i]/pos)%10]] = A[i];
    }
    for(i=0;i<n;i++)
    {
        A[i]=B[i];
    }
}
void RadixSort(int A[],int n)
{
    int max=getmax(A,n);
    for(int pos=1;max/pos>0;pos*=10)
    {
        CountSort(A,n,pos);
    }
}
int main()
{
    int A[]={432,8,530,90,88,231,11,45,677,199};
    int n = sizeof(A) / sizeof(A[0]);
    RadixSort(A,n);
    int i;
    for( i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}