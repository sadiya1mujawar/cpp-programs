#include <iostream>
using namespace std;

class Time
{
private:
    int hr, mi, sec;

public:
    void settime(int h, int m, int s)
    {
        hr = h;
        mi = m;
        sec = s;
    }

    void display()
    {
        cout << "hour - minute - seconds" << endl;
        cout << hr << " - " << mi << " - " << sec << endl;
    }
};

Time s1, s2;

int main()
{
    int h, m, s;

    cin >> h >> m >> s;
    s1.settime(h, m, s);

    cin >> h >> m >> s;
    s2.settime(h, m, s);

    cout << "s1 time" << endl;
    s1.display();

    cout << "s2 time" << endl;
    s2.display();

    return 0;
}
