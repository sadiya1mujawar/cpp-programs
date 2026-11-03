//virtual to overcome diamond problem multiple inheritance
#include <iostream>
#include <string>
using namespace std;
class a
{
public:
    int i;
};
class b: virtual public a
{
public:
    int j;
};
class c: virtual public a
{
public:
    int k;
};
class d: public b,public c
{
public:
    int sum;
};
int main()
{
    d o1;
    o1.i=10;
    o1.j=20;
    o1.k=30;
    o1.sum=o1.i+o1.j+o1.k;
    cout<<o1.sum;
    return 0;
}


