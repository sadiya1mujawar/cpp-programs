//function overriding single inheritance
#include <iostream>
#include <string>
using namespace std;
class a
{
public:
    void dis()
    {
        cout<<"hii";
    }
};
class b: virtual public a
{
public:
  void dis()//----------overrides base class's dis()
    {
        cout<<"hii";
    }
};

int main()
{
    b o1;
    o1.dis();
    o1.a::dis();//---------------scope resolution use
    return 0;
}

