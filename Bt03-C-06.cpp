#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >>n;
    int M[n][n];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            M[i][j]=0;
        }
    }

    int k=1;
    int col=n/2;
    int row=0;

    while (k<=n*n)
    {
        if (M[row][col]==0)
        {
            M[row][col]=k;
        }
        else
        {
            if (col==0&&row==(n-1))
            {
                row=row-(n-1)+1;
                col=col+(n-1);
                M[row][col]=k;
            }
            else
            {
                row=row+2;
                col=col-1;
                M[row][col]=k;
            }


        }

        k++;
        col++;
        row--;
        if (col==n)
        {
            col=0;
        }
        if (row==-1)
        {
            row=n-1;
        }

    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout <<M[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;
}
