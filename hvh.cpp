#include<iostream>
using namespace std;

struct student
{
    int roll;
    char name[25];
    char dept[10];
    char address[50];
};
int main()
{struct student s;
    s.roll=10;
    s.name='hg';

    printf("%c",s.name);
    return 0;

}