
// add 2 numbers.

#include<iostream>
using namespace std;

int add(int x,int y);
int add1(int &x,int &y);
int add2(int *x,int *y);

int main()
{
    int a=4,b=9,sum,sum1,sum2;
    sum=add(a,b);
    cout<<"The sum is "<<sum<<endl;

     sum1=add1(a,b);
    cout<<"The sum is "<<sum1<<endl;

    sum2=add2(&a,&b);
    cout<<"The sum is "<<sum2;

    return 0;
}

int add(int x, int y)//-----------------pass by value
{
    int z=x+y;
    return z;
}
int add1(int &x, int &y)//------pass by reference
{
    int z=x+y;
    return z;
}
int add2(int *x, int *y)//--------pass by pointer
{
    int z=*x+*y;
    return z;
}
