#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the size ";
    cin >>n;
    int a[n];
    a[1]=2;
    for(int x:a)
    {
        cout<<x<<endl;
    }
    return 0;



    
}