#include <iostream>
using namespace std;

int main()
{
    int p[10][10], row, column, i, j, trans[10][10];
    cout << "Enter rows of matrix: ";
    cin >> row;
    cout << "Enter column of matrix: ";
    cin >> column;
    cout << endl << "Enter elements of matrix: " << endl;
    for(i = 0; i < row; ++i)
    for(j = 0; j < column; ++j)
    {
        cout << "Enter elements P" << i + 1 << j + 1 << ": ";
        cin >> p[i][j];
    }
    cout << endl << "Entered Matrix: " << endl;
    for(i = 0; i < row; ++i)
        for(j = 0; j < column; ++j)
        {
            cout << " " << p[i][j];
            if(j == column - 1)
                cout << endl << endl;
        }
    for(i = 0; i < row; ++i)
        for(j = 0; j < column; ++j)
        {
            trans[j][i]=p[i][j];
        }
    cout << endl << "Transpose of Matrix: " << endl;
    for(i = 0; i < column; ++i)
        for(j = 0; j < row; ++j)
        {
            cout << " " << trans[i][j];
            if(j == row - 1)
                cout << endl << endl;
        }
    return 0;
}
