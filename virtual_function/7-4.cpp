//virtual function
#include <iostream>
#include <string>
using namespace std;
class a
{
public:
    vitual void s()
    {
        cout<<"a";
    }
};
class d: public a
{
public:
    void s() override{
    cout<<"dog";
    }
};

int main()
{

    return 0;
}
