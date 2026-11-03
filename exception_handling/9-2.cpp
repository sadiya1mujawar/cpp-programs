//---------handle multiplication of 2 variables using exception such that the product is non zero
#include<iostream>

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    try
    {
       if(a==0) throw a;
       else if(b==0) throw 2.5;
    }
    catch(int x)
    {
        cout<<"x is zero"<<endl;
     return 0;
    }
     catch(double z)
    {
        cout<<"y is zero"<<endl;
     return 0;
    }
    cout<<a*b;
        return 0;
}
