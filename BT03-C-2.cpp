#include <iostream>
using namespace std;
int main ()
{
    string s;
    cin >>s;
    bool check=true;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]!=s[s.length()-i-1])
        {
            check=false;
        }

    }
    if (check==true)
    {
        cout <<"Yes";
    }
    else
    {
        cout <<"No";
    }
}

