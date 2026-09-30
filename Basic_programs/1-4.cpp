//find the largest of number in the list.
#include<iostream>
using namespace std;
int main()
{
cout<<"enter count of numbers"<<endl<<"enter numbers"<<endl;
int n,a[20];
cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i];
int temp=a[0];
for(int i=0;i<n;i++)
{
    if(temp<a[i])
        temp=a[i];
}
cout<<"biggest number is "<<temp;
return 0;
}

