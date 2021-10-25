#include<stdio.h>
#define n 7

int MIN(int A[],int k,int N)
{
    int min=A[k],loc=k,j;
    for(j=k+1;j<=N-1;j++)
    { 
        if(min>A[j])
        {
            min=A[j];
            loc=j;
        }
    }
    return loc;
}
int main()
{
    int A[n]={34,52,1,63,58,74,12};
    int loc,k,temp;
    for(k=0;k<n;k++)
    {
        loc=MIN(A,k,n);
        temp=A[k];
        A[k]=A[loc];
        A[loc]=temp;
    }
    for(k=0;k<n;k++)
        printf("\t%d",A[k]);

    return 0;

}