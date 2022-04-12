#include <bits/stdc++.h>

using namespace std;
void nhap(int *a,int &n )
{

    cout<<"nhap n ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];


}
void xuat(int *a,int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";


}

void Shellsort(int *a,int n,int d)
{
    int i,j,x,gap;
    for(gap=n/d;gap>0;gap/=d)
    {

        for(i=gap;i<n;i++)
        {

            x=a[i];
            j=i-gap;
            while((x<a[j])&&(j>=0))
            {

                a[j+gap]=a[j];
                j=j-gap;
            }
            a[j+gap]=x;
        }
    }
}
void Sellsort1(int *a,int n,int d)
{

    int x;
    for(gap=n/d;gap>0;gap/=d)
    {
        for(int i=gap;i<n;i++)
        {

            x=a[i];
            j=i-gap;
            while(x<a[j]&&j>=0)
            {
                a[j+gap]=a[j]
                j=j-gap;

            }
            a[j+gap]=x;
        }

    }
}
int main()
{
    int n;
    int *a=new int[n];
    nhap(a,n);
     xuat(a,n);
     cout<<endl;
    Shellsort(a,n,2);
    xuat(a,n);

}
