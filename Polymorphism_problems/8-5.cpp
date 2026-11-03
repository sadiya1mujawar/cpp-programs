//----------operator overloading(binary operator)
#include<iostream>
using namespace std;
class comp{
float r,i;
public:
    comp(float re=0 ,float im=0): r(re),i(im){}

    comp operator-(const comp &c) {
    return comp(r-c.r,i-c.i);
    }
    void show()
    {
        cout<<r<<"  "<<i<<endl;
    }
};
int main()
{
    comp a(5,7),b(3,4);
    comp c=a-b;//------------------calls a.operator+(b)
c.show();
}
