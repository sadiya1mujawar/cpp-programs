//----------virtual function(for late binding or run time polymorphism)
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
            cout<<"circle";
        }

};
int main()
{
    shape *s=new circle();
    s->draw();
    return 0;
}
//-------------late binding
