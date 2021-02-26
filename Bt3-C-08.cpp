#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >>n;
    int T[n];
    for (int i=0;i<n;i++)
    {
        cin >>T[i];
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (T[i]>T[j])
            {
                int tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        cout <<T[i]<<" ";

    }
    return 0;
}
