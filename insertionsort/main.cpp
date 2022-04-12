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
void insertionsort(int *a,int n)
{
    int x,pos;
    for(int i=1;i<n;i++)
    {
        x=a[i];
        pos=i-1;
        while(pos>=0&&a[pos]>x)
        {
            a[pos+1]=a[pos];
            pos--;

        }
        a[pos]=x;

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
