#include<iostream>
using namespace std;
int main ()
{
    float netsalary=0,basicsalary=0,percentageofallowance=0,percentageofdeduction=0
    ;
    cout<<"enter the basic salary,percentageofallowanceand percentageofdeduction";
    cin>>basicsalary>>percentageofallowance>>percentageofdeduction;
    netsalary=basicsalary+(basicsalary*percentageofallowance)-(basicsalary*percentageofdeduction);
    cout<<"netsalary"<<netsalary;
    return 0;
}