#include<stdio.h>
void swap(int A[],int i, int j)
{
    int temp;
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}
void heapify(int A[],int n,int i)
{
    int largest=i;
    int l=(2*i)+1;
    int r=(2*i)+2;

    if(l<n && A[l]>A[largest])
    {
        largest=l;
    }
    if(r<n && A[r]>A[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(A,largest,i);
        heapify(A,n,largest);
    }
}
void heapSort(int A[],int n)
{
    int i;
    for(i=n/2-1;i>=0;i--)
    {
        heapify(A,n,i);
    }
    for(i=n-1;i>=0;i--)
    {
        swap(A,0,i);
        heapify(A,i,0);
    }
}
int main()
{
    int A[]={10,30,50,20,35,15};
    // int size = sizeof(A)/sizeof(A[0]); 
    int size = 6;
    heapSort(A,size);
    for(int i=0;i<size;i++)
    {
        printf("\t%d",A[i]);
    }
    return 0;

}