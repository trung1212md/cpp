#include <bits/stdc++.h>

using namespace std;
long long luythua(long long k,long long n)
{

    if(k==0)
        return 1;
    if(k==1)
        return n;
    long long x=pow(n,k/2);
    if(k%2==0)
        return x*x;
    return x*x*n;
}
void initwslolve()
{
int n,k;
cout<<"nhap n, k";
    cin>>n>>k;
    cout<<luythua(n,k);
}
int main()
{
    int t;
    cout<<"nhap t";
    cin>>t;
    while(t--)
        initwslolve();
}
