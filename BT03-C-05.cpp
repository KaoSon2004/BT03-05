
#include<iostream>
using namespace std;
int main() {
    int row, col;
    cin >> row >> col;
    int x = row;
    int y = col;
    int i, j, p = 0;
    int k = 1;
    int c[row][col];
    while (k <= x *y) {
        for (i = p; i < col; i++) {
            c[p][i] = k++;
        }
        for (i = p + 1; i < row; i++) {
            c[i][col - 1] = k++;
        }
        if (p != row - 1) {
            for (i = col - 2; i >= p; i--) {
                c[row - 1][i] = k++;
            }
        }
        if (p != col - 1) {
            for (i = row - 2; i > p; i--) {
                c[i][p] = k++;
            }
        }
        p++; row--; col--;
    }
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
}

