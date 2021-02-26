#include <iostream>
using namespace std;
int main ()
{
    int row,col;
    cin >>row>>col;
    char M[row][col];
    char N[row][col];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            cin >>M[i][j];
        }
    }
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            int dem=0;
            if (M[i][j]=='*')
            {
                N[i][j]='*';
            }
            else
            {

                if(M[i+1][j]=='*')
                {
                    dem++;
                }
                if (M[i][j+1]=='*')
                {
                   dem++;
                }
                if (M[i+1][j+1]=='*')
                {
                    dem++;
                }
                if (M[i-1][j-1]=='*')
                {
                    dem++;
                }
                if (M[i-1][j]=='*')
                {
                    dem++;
                }
                if (M[i][j-1]=='*')
                {
                    dem++;
                }
                if (M[i+1][j-1]=='*')
                {
                    dem++;
                }
                N[i][j]=char(dem+48);
            }
        }
    }
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            cout <<N[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;

}
