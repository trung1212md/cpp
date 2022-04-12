#include <bits/stdc++.h>

using namespace std;

void nhap(int *a ,int &n)

{
        cout<<"nhap n";
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];

}
void xuat(int *a,int n)
{
    cout<<"mang sau khi sap xep:";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}
void interchanesortT(int *a ,int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j])
            swap(a[i],a[j]);

}
void interchanesortG(int *a ,int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]<a[j])
            swap(a[i],a[j]);



}
int main()
{
    int n;
    int *a=new int[n];
    nhap(a,n);
    interchanesortT(a,n);
    cout<<endl;
    xuat(a,n);
    cout<<endl;
    cout<<"max:";
        cout<<a[n-1];

    cout<<endl;
    cout<<"giam dan";
    interchanesortG(a,n);
    xuat(a,n);
    cout<<"min:";
        cout<<a[0];


}
