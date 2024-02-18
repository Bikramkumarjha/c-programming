#include <iostream>
using namespace std;
int main()
{
    int i ,j;
 int a[2][2]={1,2,3,4}, b[2][2]={1,2,3,4}, mult[2][2];
 for(i=0;i<2;i++)
 {
    for(j=0;j<2;j++)
    {
        mult[i][j]=(a[i][j]*b[i][j]+a[i][j+1]*b[i][j+1]);
    }
 }
 for(i=0;i<2;i++)
 {
    for(j=0;j<2;j++)
    {
        cout<<mult[i][j]<<endl;
    }

 }
 return 0;
}