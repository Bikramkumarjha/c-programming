#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        cout<<"area is"<< length*breadth;
       return length*breadth;

    }
    int perimeter()
    {
        return 2*(length*breadth);
    }

};
int main ()
{
    rectangle r1,r2;
    rectangle *p=new rectangle();
    r1.length=5;
    r1.breadth=10;
    cout<<"area of retangle is"<< r1.area()<<endl;
    return 0;
}