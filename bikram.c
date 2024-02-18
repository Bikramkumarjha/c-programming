#include<stdio.h>
void main()
{
    int a=4;
   // printf("enter the number");
    //scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i==1||j==1||i==a||j==a)
            printf("*");
        }
        printf("\n");
    }
}