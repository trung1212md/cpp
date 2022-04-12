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
void bubblesort(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {

        for(int j=n-1;j>i;j--)
            if(a[j]<a[j-1])
            swap(a[j],a[j-1]);
    }

}
int main()
{
    int n;
    int *a=new int[n];
    nhap(a,n);
     xuat(a,n);
     cout<<endl;
    bubblesort(a,n);
    xuat(a,n);

}
