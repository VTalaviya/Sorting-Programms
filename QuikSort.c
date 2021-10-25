#include<stdio.h>


void QuikSort(int A[],int l,int h);

void swap(int A[],int i,int j)
{
    int temp;
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}
int partition(int A[],int l,int h)
{
    int pivat=A[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        while(A[i] <= pivat)
            i++;
        while(A[j] > pivat)
            j--;

        if(i<j)
            swap(A,i,j);
    }
    swap(A,j,l);
    return j;
}
void QuikSort(int A[],int l,int h)
{
    if(l<h)
    {
        int pivat=partition(A,l,h);
        QuikSort(A,l,pivat-1);
        QuikSort(A,pivat+1,h);
    }
}
int main()
{
    int A[]={4,6,2,5,7,9,1};
    QuikSort(A,0,6);
    for(int i=0;i<6;i++)
        printf("%d\t",A[i]);

    return 0;
}
