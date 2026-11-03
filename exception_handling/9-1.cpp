//-----------exception handling
#include<iostream>

using namespace std;
int main()
{
    int x=-1;
    try{
    cout<<"before try"<<endl;
    if(x<0)
    {
        throw x;
        cout<<"not executed";
    }
    }
    catch (int x)
    {
        cout<<"exception caught x = "<<x<<endl;
    }
    cout<<"after catch"<<endl;

    return 0;
}
