//fonction overridding, virtual function for diamond problem for function overrideing
//-----override keyword ,pointer base to derived
#include<iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout<<"Base\n";
    }
};
class derv1 : public base
{
    public:
    void show()
    {
        cout<<"derv1\n";
    }
};
class derv2 : public base
{
    public:
    void show()
    {
        cout<<"derv2\n";
    }
};
int main()
{
    base b;
    b.show();
    derv1 d1;
    derv2 d2;
    base* ptr;//------------run time polymorphism
    ptr= &d1;
    ptr->show();
    ptr=&d2;
    ptr->show();
}
