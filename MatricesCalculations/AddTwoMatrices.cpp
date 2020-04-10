#include <iostream>
using namespace std;

int main()
{
    int r, c, p[50][50], q[50][50], sum[50][50], i, j;
    cout << "Enter number of rows (between 1 and 50): ";
    cin >> r;
    cout << "Enter number of columns (between 1 and 50): ";
    cin >> c;
    cout << endl << "Enter elements of 1st matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element p " << i + 1 << j + 1 << " : ";
           cin >> p[i][j];
       }
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element q " << i + 1 << j + 1 << " : ";
           cin >> q[i][j];
       }
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = p[i][j] + p[i][j];
    cout << endl << "Sum of P and Q is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}
