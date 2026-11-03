//-----------multilevel inheritance with constructor initialization list
#include <iostream>
#include <string>
using namespace std;
class vehicle
{
public:
    int milage;
    void d(){
    cout<<"vehicle class"<<endl;
    }
    vehicle(int m)
    :milage(m){}
};

class car : public vehicle
{
public:
    int price;

    void di(){
    cout<<"car inherited" <<endl;
    }
    car(int p,int m)
    :price(p),vehicle(m){}
};
class sp_car : public car
{
public:
    string color;

    void dis(){
         d();
    cout<<"spoorts_car inherited" <<endl;
    }
    sp_car(int m,int p,string c)
    :color(c),car(p,m){}

};

int main()
{

    sp_car c(20,30,"Black");

   // c.d();
    c.di();
    c.dis();
    cout<<"mileage = " <<c.milage<<endl;
    cout<<"price = " <<c.price<<endl;
    cout<<"color = " <<c.color<<endl;
    return 0;
}
