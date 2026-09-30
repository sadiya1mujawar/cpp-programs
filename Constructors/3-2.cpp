//----add time1 and time2
#include<iostream>
using namespace std;
class Time{
private:
    int hr,mi,sec;
public:
    void settime(int h,int m,int s);

    void display()
    {
        cout<<"hour - minute - seconds"<<endl<<hr<<" - "<<mi<<" - "<<sec<<endl;
    }
      void add(Time &x, Time &y)
    {
        hr = x.hr + y.hr;
        mi = x.mi + y.mi;
        sec = x.sec + y.sec;
    }
}s1,s2,s3;
void Time :: settime(int h,int m,int s)
{
    hr=h;
    mi=m;
    sec=s;
}
int main()
{
   int h,m,s;
   cout<<"enter time 1 ";
   cin>>h>>m>>s;
   s1.settime(h,m,s);
   cout<<"enter time 2 ";
    cin>>h>>m>>s;
   s2.settime(h,m,s);
   cout<<"s1 time"<<endl;
   s1.display();
    cout<<"s2 time"<<endl;
   s2.display();
    cout << "s3 time" << endl;

   s3.add(s1, s2);
    s3.display();
    return 0;
}
