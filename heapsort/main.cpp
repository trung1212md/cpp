#include <bits/stdc++.h>

using namespace std;
void nhap(int *a,int &n)
{

    cout<<"nhap n";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];


}
void xuat(int *a,int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";


}
void heapify(int *a,int n,int i)
{

    while(i<=n/2-1)
    {
        int left=2*i+1;
        int right=2*i+2;

        int max=left;
        if(right<n&&a[right]>a[max])
        {
            max=right;
        }
            if(a[i]<a[max])
            {

                swap(a[i],a[max]);
            }
            i=max;
    }
}
void heapify(int *a int n int i)
{
    while(i<=n/2-1)
    {
        int left=2*i+1;
        int right=2*i+2;
        int max=left;
        if(right<n&&a[right]>a[max])
        {

            max=right;

        }
        if(a[i]<a[max])
        {

            swap(a[i],a[max])
        }
        i=max;

    }

}


void buildheap(int *a,int n)
{

    for(int i=n/2-1;i>=0;i--)
    {

        heapify(a,n,i);
    }
}
void buildheap(int *a int n)
{

    for(int i=n/2-1;i>=0;i--)
    {

        heapify(a,n,i);
    }

}

void heapSort(int *a,int n)
{

    buildheap(a,n);
    for(int i=n-1;i>=0;i--)
    {

        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}
void heapSort(int *a ,int n)
{
    buildheap(a,n);
    for(int i=n-1;i>=0;i--)
    {

        swap(a[0],a[i])
        heapify(a,i,0);
    }

}
int main()
{
    int n;
    int *a=new int[n];
    nhap(a,n);
     xuat(a,n);
     cout<<endl;
    insertionsort(a,n);
    xuat(a,n);

}
