#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int A[n],i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&A[i]);
    }
    bubblesort(A,n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",A[i]);
    }
    return 0;
}
void bubblesort(int A[],int N)
{
    int round,i,temp,flag;
    for(round=1;round<=N-1;round++)
    {
        flag=0;
        for(i=0;i<=N-1-round;i++)
        {
            if(A[i]>A[i+1])
            {
                flag=1;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }           
        }
        if (flag==0)
        {
            printf("\nRound = %d",round);
            return;
        } 
    }
}