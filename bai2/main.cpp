#include<bits/stdc++.h>
using namespace std;

const int mod=123456789;
long long n,k;
long long luythua(long long n,long long k)
{

    if(k==0)
        return 1;
    if(k==1)
        return n%mod;
    long long T=luythua(n,k/2);
    if(k%2==0)
        return T*T%mod;
    else
        return T*T%mod*n%mod;
}
void nhap()
{

    cout<<"nhap n,k";
    cin>>n;
    if(n==1)
    cout<<1<<" ";
    else
    cout<<luythua(2,n-1)<<" ";
}
int main()
{
    int t;
    cout<<"nhap t";
    cin>>t;
    while(t--)
        nhap();
    return 0;

}
