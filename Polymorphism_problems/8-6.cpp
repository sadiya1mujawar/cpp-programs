//---------operator overloading unary operator
#include<iostream>
using namespace std;
class counter{
int i;
public:
    counter(int val=0): i(val){}

    counter& operator++() {//--------prefix ++c
    i++;
    return *this;
    }
    counter operator++(int)//---------postfix c++
    {
      counter temp=*this;
      i++;
      return temp;//-------return old value
    }
    int get()
    {
        return i;
    }
};
int main()
{
  counter a(2);
   ++a;
   cout<<a.get()<<endl;
   a++;
   cout<<a.get()<<endl;

}

