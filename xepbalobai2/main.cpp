#include <bits/stdc++.h>

using namespace std;

struct Dovat
{

    float trongluong,giatri,dongia;
};
void quicksort(int a[],int l,int r)
{
    if(l>=r)
        return ;
    float m=a[r].dongia;
    for(int j=l;j<r-1;j++)
    {

        if(a[j].dongia>m)
        {

            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    quicksort(a,l,i);
    quicksort(a,i+2,r);

}
void nhap(Dovat a[],int n,int &w)
{
    cin>>n>>w;
    for(int i=0;i<n;i++)
    {

        cin>>a[i].trongluong>>a[i].giatri;
        a[i].dongia=a[i].giatri/a[i].trongluong;
    }

}
void xepbalo(Dovat a[],int n,int w)
{

    quicksort(a,0,n-1);
    cout<<"so do vat cho vao balo";
    for(int i=0;i<n;i++)
    {

        if(w>=a[i].trongluong)
        {

            w-=a[i].trongluong;
            cout<<a[i].trongluong<<" "<<a[i].giatri<<"/n"
        }
        else
            break;
    }
}
int main()
{

    Dovat a[100];
    int n,w;
    nhap(a,n,w);
    xepbalo(a,n,w);
}
