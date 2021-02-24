#include <iostream>
#include <time.h>
using namespace std;
int Ran(int n)
{
    srand(time(NULL));
    return rand()%n+1;

}
int main ()
{
    int n;
    cin >>n;
    cout <<Ran(n);
    return 0;1
}
