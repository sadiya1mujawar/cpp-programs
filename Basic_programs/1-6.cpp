// check if the string is palindrome

/*#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s="dad",t;
    for(int i=s.length()-1;i>=0;i--)
    {
        t+=s[i]; //////// ----------------------------------------
    }
    t[s.length()]='\0';
    if(s==t)
        cout<<"palindrome";
    else
        cout<<"not palindrome";
    return 0;
}

*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[]="WWojpoWW";
    int len=strlen(str);
    for(int i=0;i<(len/2);i++)
    {
        if(str[i]!=str[len-(i+1)])
        {
                cout<<"not Palindrome";
            return 0;
        }

    }
    cout<<"palindrome";
    return 0;
}
