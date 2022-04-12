#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long gapdoi(long long n,long long k)
{

    if(k==1)
        return 1;
    if(k==pow(2,n))
       return n+1;
    if(k<=pow(2,n))
        return gapdoi(n-1,k);
    return gapdoi(n-1,k-pow(2,n));
}
void nhap()
{

    cout<<"nhap n,k";
    cin>>n>>k;
    cout<<gapdoi(n-1,k)<<" ";
}
/** \brief
 *
 * \return int
 *
 */
int main()
{
    int t;
    cout<<"nhap t";
    cin>>t;
    while(t--)
        nhap();
    return 0;

}
