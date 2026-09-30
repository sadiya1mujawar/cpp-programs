#include<iostream>
using namespace std;

class Complex
{
    float real;
    int imaginary;
public:
    void setData()
    {
        cout<<"Enter the Real Part and Imaginary Part "<<endl;
        cin>>real>>imaginary;

    }

    void print()
    {
        cout<<"Complex Number= "<<real<<" + "<<imaginary<<"i "<<endl;
    }

    void addNumber(Complex &a,Complex &b)//---------------pass by reference
    {
        real=a.real+b.real;
        imaginary=a.imaginary+b.imaginary;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setData();
    c2.setData();
    c3.addNumber(c1,c2);//---------------pass by reference
    c3.print();
}
