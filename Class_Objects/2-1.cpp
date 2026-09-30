//---------------objects
#include<iostream>
using namespace std;
class test
{
private:
    int mark;
    float spi;
public:
    void setdata()
    {
        mark=70;
        spi=6.5;
    }
    void display()
    {
        cout<<"mark ="<<mark<<endl<<"spi ="<<spi<<endl;
    }
};
int main()
{
    test o1;
    o1.setdata();
    o1.display();
    return 0;
}
