//--------swap numbers parameter passing
#include<iostream>
using namespace std;
void m1(int &a,int &b)//----------pass by reference
{
    int c=a;
    a=b;
    b=c;
}
void m2(int *a,int *b)//--------pass by pointer
{
    int c=*a;
    *a=*b;
    *b=c;
}

int main()
{
    int a=5,b=7;
    m1(a,b);
    cout<<"a="<<a<<"b="<<b<<endl;
     m2(&a,&b);
    cout<<"a="<<a<<"b="<<b;
    return 0;
}
