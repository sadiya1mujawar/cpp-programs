//-----------abstract class(cannot be used to create direct objects ) ----class having pure virtual function(do nothing,in base class,need to redefine in derived class)
//-----abstract class vehicle and derived class car and bike to display features of vehiclr (mileage, num of wheel , fuel capacity)
#include<iostream>
using namespace std;
class vehicle//-----------abstract class
{
protected:
    int w,m,f;
public:
    void get()
    {
    cin>>w>>m>>f;
    }
    virtual void dis()=0;//----------pure virtual function

};
class car: public vehicle
{
public:

    void dis()
    {
        cout<<w<<"  "<<m<<" "<<f<<" "<<endl;
    }
};
class bike: public vehicle
{
public:
    void dis()
    {
        cout<<w<<"  "<<m<<" "<<f<<" "<<endl;
    }
};
int main()
{

  vehicle *s[2]={new car(),new bike()};
  for (int i=0;i<2;i++)
    {
        s[i]->get();
    }
  for (int i=0;i<2;i++)
    {
        s[i]->dis();
    }
}
