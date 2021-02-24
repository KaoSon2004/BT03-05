#include <iostream>
using namespace std;
int UCLN(int a,int b)
{
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;

}
int main ()
{
    int a;
    int b;
    cin >>a>>b;
    if (UCLN(a,b)==1)
    {
        cout <<"Yes"<<endl;

    }
    else
    {
        cout <<"No"<<endl;
    }
    return 0;
}
