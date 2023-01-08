#include <iostream>

using namespace std;

int main()
{
    int i, j, sum = 0;
    int row_num, col_num;
    // int matrix[3][3];

    int matrix[3][3] = {{12, 5, 8}, {6, 7, 4}, {18, 9, 2}};

    cout << "Enter the size of row " << endl;
    cin >> row_num;

    cout << "-------------------------" << endl;

    cout << "Enter the size of column" << endl;
    cin >> col_num;

    cout << "-------------------------" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
    }

    cout << "The final matrix sum is " << sum << endl;

    return 0;
}
