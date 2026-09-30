// Write a cpp program , Define class Rectangle with members width and height. Also define function to set_values(w,l)
// to initialize the members, area() to calculate area. Demonstrate class Rectangle for two objects.

#include<iostream>
using namespace std;

class Rectangle
{
    float width,height,a;
public:
    void set_values(float w,float l)
    {
        width=w;
        height=l;
    }

    float area()
    {
        a=width*height;
        return a;
    }

};


int main()
{
    Rectangle r1,r2;
    float w,l;
    cout<<"Enter the Width of the rectangle :"<<endl;
        cin>>w;
        cout<<"Enter the Length of the rectangle :"<<endl;
        cin>>l;
    r1.set_values(w,l);
    r1.area();
    cout<<"The Area of the Rectangle is = "<<r1.area()<<endl;

cin>>w>>l;
    r2.set_values(w,l);
    r2.area();
    cout<<"The Area of the Rectangle is = "<<r2.area()<<endl;
    return 0;
}
