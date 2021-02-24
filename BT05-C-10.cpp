#include <iostream>
#include <time.h>

using namespace std;
void check(int M[],int n)
{
    for (int i=0;i<n-2;i++)
    {
        for (int j=i+1;j<n-1;j++)
        {
            for (int k=j+1;k<n;k++)
            {
                if ((M[i]+M[j]+M[j])%25==0)
                {
                    cout <<M[i]<<" "<<M[j]<<" "<<M[k]<<endl;
                }
            }
        }
    }
}
int main ()
{
    srand(time(NULL));
    int n=rand()%100;
    int M[n];
    for (int i=0;i<n;i++)
    {
        M[i]=rand()%49;
    }
    check(M,n);
    return 0;
}
