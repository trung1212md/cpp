#include <bits/stdc++.h>
#include<stdbool.h>

using namespace std;
void bai3()
{

    int x;
    do
    {

        cout<<"vui long nhap so tien can doi";
        cin>>x;

    }
    while(x<=0);
    int a[12]={0,500,200,100,50,20,10,5,2,1};
    int tong=0;
    int i;
    cout<<"nhan duoc";
    for(int i=1;i<=9;i++)
        if(a[i]<x)
            break;
    while(i<=9)
    {

        if(x==0)
            break;
        if(a[i]<x)
        {
            int dem=0;
            while(a[i]<=x)
            {
                dem++;
                x-=a[i];
            }
            cout<<"/n"<<dem<<"to"<<a[i];
        }
        i++;
    }




}
int main()
{

    bai3();
}
