#include <iostream>
using namespace std;
int kiemTra(int k,int n)
{
    if (k<0)
        return 0;
    if (n<0)
        return 0;
    if (k>n)
        return 0;

}
int  giaithua (int n)
{
    int ans=1;
    for (int i=1;i<=n;i++)
        ans=ans*i;
    return ans;
}
int toHop(int k,int n)
{
    return giaithua(n)/(giaithua(k)*giaithua(n-k));
}
int main ()
{
    int n;
    int k;
    do
    {
        cin >>k>>n;
        cout <<toHop(k,n);
    }
    while (k!=-1&&n!=-1);



    return 0;
}
