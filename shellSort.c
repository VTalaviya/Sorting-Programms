#include<stdio.h>
void shellSort(int A[],int n)
{
    int gap,i,j,temp;
    for(gap=n/2;gap>=1;gap/=2)
    {
        for(j=gap;j<n;j++)
        {
            for(i=j-gap;i>=0;i-=gap)
            {
                if(A[i+gap]>A[i])
                    break;
                else
                {
                    temp=A[i+gap];
                    A[i+gap]=A[i];
                    A[i]=temp;
                }
                   
            }
        }
    }
}
int main()
{
    int A[9]={23,29,15,19,31,7,9,5,2};
    shellSort(A,9);
    for(int i=0;i<9;i++)
    {
        printf("\t%d",A[i]);
    }
    return 0;
}