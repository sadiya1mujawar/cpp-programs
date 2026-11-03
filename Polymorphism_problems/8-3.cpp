//------------virtual funcction for verriding
#include<iostream>
using namespace std;
class shape
{
public:
    virtual void draw()
    {
        cout<<"shape";
    }
};
class circle : public shape
{
    public:
        void draw() override
        {
            cout<<"circle"<<endl;
        }

};
class triangle : public shape
{
    public:
        void draw() override
        {
            cout<<"triangle"<<endl;
        }

};
class square : public shape
{
    public:
        void draw() override
        {
            cout<<"square"<<endl;
        }

};
int main()
{
    shape *s[3]={new circle(),new triangle(),new square()};
    for (int i=0;i<3;i++)
    {
        s[i]->draw();
    }
    return 0;
}

