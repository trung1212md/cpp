#include <iostream>

using namespace std;
void NP()
{

    int n,k;
    cout<<"nhap n";cin>>n;
    cout<<"nhap k";cin>>k;
    int a[n+1];
    for( int i=1;i<n;i++)
        cin>>a[i];
    int l=1,r=n,dem=0;
    while(l<=r)
    {
        if(k==a[l]||k==a[r])
        {
            if(k==a[l])
                cout<<l<<endl;
            if(k==a[r])
                cout<<r<<endl;
            dem=1;

        }
        l++;r--;

    }
    if(dem==0)
        cout<<"no";
    cout<<"co";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        NP();

}
