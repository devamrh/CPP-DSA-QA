#include <iostream>
#include <array>
using namespace std;

int main()
{
    int i, j, r, c;

    cout << "----------------------------" << endl;
    cout << "Enter the row number:" << endl;
    cin >> r;
    cout << "Enter the column number:" << endl;
    cin >> c;

    int arr01[r][c];
    int arr02[r][c];
    int sum[i][j];

    cout << "----------------------------" << endl;
    cout << "-----------Array-01----------" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "arr01[" << i << "][" << j << "]" << endl;
            cin >> arr01[i][j];
        }
    }

    cout << "----------------------------" << endl;
    cout << "-----------Array-02----------" << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "arr02[" << i << "][" << j << "]" << endl;
            cin >> arr02[i][j];
        }
    }
    cout << "----------------------------" << endl;
    cout << "------Summation Array-------" << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            sum[i][j] = arr01[i][j] + arr02[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "The summation of the two arrays is" << sum[i][j] << endl;
        }
    }

    // Half Solved
    return 0;
}