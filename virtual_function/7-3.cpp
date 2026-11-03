//Has a vs Is a(inheritance) type of codes
//
//-------------function override vs function overloading (compile time vs run time polymorphism(early ,late binding))
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
  void dis(int b)
    {
        cout<<b;
    }
};

int main()
{
    b o1;
    o1.dis(5);
    o1.a::dis();
    return 0;
}

