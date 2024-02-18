#include<iostream>
using namespace std;
struct rectangle {
    int length ;
    int breath;
};
int main ()
{
    struct rectangle *p;
    //p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p=new rectangle;
    p->length=10;
    p->breath=5;

cout<<p->length<<endl;
cout<<p->breath<<endl;
return 0;
}