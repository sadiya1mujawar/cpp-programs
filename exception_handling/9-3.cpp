//----------divided by zero error
#include<iostream>
using namespace std;
double div(int a,int b)
{
    if(b==0)
    {
        throw "division by zero";
    }
    return (a/b);
}
int main()
{
    int a,b;
    double z;
    cin>>a>>b;
    try
    {
        z=div(a,b);
        cout<<z<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}
