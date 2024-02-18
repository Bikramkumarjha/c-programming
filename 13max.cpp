#include<iostream>
using namespace std;
int main ()
{
    int x,y;
    cout<<"enter the 2 number";
    cin>>x>>y;
    if(x>y)
    {
        cout<<x%y<<"max is";

    }
    else{
        cout<<"max is"<<"   "<<y<<endl;

    }
    return 0;
}