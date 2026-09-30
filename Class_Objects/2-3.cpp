 //--------scope resolution
 #include <iostream>
using namespace std;

class Student
{
    string s1;
    int age;

public:
    void DisplayData();   // ----------Function declaration

    void SetData()
    {
        s1 = "sadiya";
        age = 21;
    }
};

void Student::DisplayData()// -------------Function definition outside the class
{
    cout << "Name is : " << s1 << endl;
    cout << "Age is : " << age;
}

int main()
{
    Student s1;
    s1.SetData();
    s1.DisplayData();

    return 0;
}
