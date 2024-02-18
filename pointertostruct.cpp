#include<iostream>
using namespace std;
struct rectangle{
    int length ;
    int breath;

};
int main ()
{
    struct rectangle r={10,5};
    struct rectangle *p=&r;
    //(*p).length=20;
    //p->length=39;
    r.length=12;
    cout<<r.length<<endl;
    return 0;
}