#include<iostream>
#include<string>
using namespace std;
class student
{
public:
    string name;
    int age;

    void display()
    {
        cout<<"name ="<<name<<endl<<"age="<<age<<endl;
    }
    void read()
    {
        cin>>name>>age;
    }
};
int main()
{

    student st;
    st.read();
    st.display();

    return 0;
}
