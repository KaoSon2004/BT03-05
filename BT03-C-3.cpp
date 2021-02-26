#include <iostream>
#include <sstream>
using namespace std;
int main ()
{
    int a;
    cin >>a;
    stringstream ss;
    ss<<a;
    string str;
    ss>>str;
    bool check=true;
    for (int i=0;i<str.length();i++)
    {

        if (str[i]!=str[str.length()-1-i])
        {
            check=false;
        }
    }
    if (check==true)
    {
        cout <<"yes";
    }
    else
    {
        cout <<"no";
    }
}
