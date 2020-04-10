#include <iostream>
using namespace std;

int main()
{
    int p[10][10], q[10][10], row1, column1, row2, column2, i, j, k, mult[10][10];

    cout << "Enter rows for first matrix: ";
    cin >> row1;
    cout << "Enter columns for first matrix: ";
    cin >> column1;
    cout << "Enter rows for second matrix: ";
    cin >> row2;
    cout << "Enter columns for second matrix: ";
    cin >> column2;
    while (column1!=row2)
    {
        cout << "Error! Not a valid matrix multiplication";
        cout << "Enter rows for first matrix: ";
        cin >> row1;
        cout << "Enter columns for first matrix: ";
        cin >> column1;
        cout << "Enter rows for second matrix: ";
        cin >> row2;
        cout << "Enter columns for second matrix: ";
        cin >> column2;
    }
    cout << endl << "Enter elements of first matrix: \n";
    for(i = 0; i < row1; ++i)
        for(j = 0; j < column1; ++j)
        {
            cout << "Enter element p " << i + 1 << j + 1 << " : ";
            cin >> p[i][j];
        }
    cout << endl << "Enter elements of second matrix: \n";
    for(i = 0; i < row2; ++i)
        for(j = 0; j < column2; ++j)
        {
            cout << "Enter element q " << i + 1 << j + 1 << " : ";
            cin >> q[i][j];
        }
    for(i = 0; i < row1; ++i)
        for(j = 0; j < column2; ++j)
        {
            mult[i][j]=0;
        }
    for(i = 0; i < row1; ++i)
        for(j = 0; j < column2; ++j)
            for(k = 0; k < column1; ++k)
            {
                mult[i][j] += p[i][k] * q[k][j];
            }
    cout << endl << "Multiplied Matrix: \n";
    for(i = 0; i < row1; ++i)
    for(j = 0; j < column2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == column2-1)
            cout << endl;
    }
    return 0;
}
