#include <iostream>

using namespace std;
void nhap(int *a,int &n)
{

    cout<<"nhap n";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];


}
void xuat(int *a,int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";


}
void selectionsort(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {

        int min=i;
    for(int j=i+1;j<n;j++)
            if(a[min]>a[j])
                min=j;
                swap(a[min],a[i]);
    }


}
int main()
{
    int n;
    int *a=new int[n];
    nhap(a,n);
     xuat(a,n);
    selectionsort(a,n);
    xuat(a,n);

}
