#include<stdio.h>
void insertionSORT(int A[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=A[i];
        for(j=i-1;j>=0 && temp<A[j];j--)
        {
            A[j+1]=A[j];
        }
        A[j+1]=temp;
    }
}
int main()
{
    int A[5]={50,30,29,80,7};
    insertionSORT(A,5);
    for(int i=0;i<5;i++)
        printf("\t%d",A[i]);
    return 0;
}