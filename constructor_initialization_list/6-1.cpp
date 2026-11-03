//---------single inheritance with constructor initialization list
#include <iostream>
using namespace std;
class animal
{
    int l;
public:
    void dis(){
    cout<<"l= "<<l<<endl;
    }
    animal(int x)
    : l(x) {}
};

class dog : public animal
{
   float tail;
public:
    void disp(){
    cout<<"tail= "<<tail <<endl;
    }
    dog(int x,int y)
    : animal(x), tail(y) {}
};

int main()
{

    dog d(10,5);
    d.dis();
    d.disp();//--------------reused
    return 0;
}

