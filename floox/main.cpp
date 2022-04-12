#include <iostream>

using namespace std;
void Floox()
{
    int n, x;
    cout<<"nhap x,nhapn";
    cin>>x>>n;
    int a[n+1];
    int res=-1;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<x)
            res=i;
    }
    if(res==-1)
        cout<<"-1";
    cout<<res<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
        Floox();
}
