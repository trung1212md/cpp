#include <iostream>

using namespace std;
int n,a[100];
void nhap()
{
    cout<<"nhap n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int res-1e9+7,temp=0;
    for(int i=0;i<n;i++)
    {

        temp=0;
        for(int j=0;j<n;j++)
        {
            if(temp<0)
                break;
            else
                res=max(res,temp);
        }
    }
    cout<<res<<endl;

}
int main()
{
   int t;cin>>t;
   while(t--)
    nhap();
}
