#include<iostream>
using namespace std;
int main ()
{
    int u,v,a;
    float speed;
    cout<<"enter 3 number";
    cin>>u>>v>>a;
    cout<<"speed is"<<(v*v-u*u)/(2*a);
    return 0;
}