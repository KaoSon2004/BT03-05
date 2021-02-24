#include <iostream>
#include <cmath>
using namespace std;
int check(int n)
{
    if (n<2)
    {

        return 0;
    }
    else if (n>2)
    {

        if (n%2==0)
        {

            return 0;
        }
        else
        {
            for (int i=3;i<sqrt(n);i++)
            {
                if (n%i==0)
                {
                    return 0;
                }
            }
        }
    }
    return 1;

}
int main ()
{
    int N;
    cin >>N;
    for (int i=2;i<=N;i++)
    {

        if (check(i)==1)
        {
            cout <<i<<" ";
        }
    }
    return 0;

}
