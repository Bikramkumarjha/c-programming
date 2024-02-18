#include<iostream>
#include<cmath>

using namespace std;
int main ()
{
    float a,b,c,r1,r2;
    cout<<"enter the vAlue of ";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
     r2=(-b-sqrt(b*b-4*a*c))/(2*a);
     cout<<"root of equation"<<r1<<endl;
     cout<<"root of equation"<<r2;
     return 0;

}