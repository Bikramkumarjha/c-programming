#include<iostream>
using namespace std;
int main ()
{
    int hour;
    cout<<"enter the hour";
    cin>>hour;
    if(hour>=6 && hour<=18)
    {
        cout<<"working hour";

    }
    else{
        cout<<"leisure";

    }
    return 0;
}