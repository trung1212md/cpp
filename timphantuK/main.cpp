#include <bits/stdc++.h>

using namespace std;
void mangk()
{

    int n,m,k;
    cout<<"nhap n;";
    cin>>n;
    cout<<"nhap m";
    cin>>m;
    cout<<"nhap k";
    cin>>k;
    int a[m+n];
    for(int i=0;i<n+m;i++)
    {

        cin>>a[i];

    }
    sort(a,a+m+n);

    for(int i=0;i<n+m;i++)
    {

        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a[k-1]<<endl;
}
int main()
{
    int t;
    cout<<"nhap t";
    cin>>t;
    while(t--)
    mangk();
}
