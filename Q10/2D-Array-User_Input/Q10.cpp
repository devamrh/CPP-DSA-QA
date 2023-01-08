#include <iostream>
#include <array>
using namespace std;

main()
{
    //   int  s[2][2];
    //   int  i, j;
    //   cout<<"\n2D Array Input:\n";
    //   for(i=0;i<2;i++)
    //   {
    //   	for(j=0;j<2;j++)
    //   	{
    //   		cout<<"\ns["<<i<<"]["<<j<<"]=  ";
    //   		cin>>s[i][j];
    // 	}
    //   }

    //   cout<<"\nThe 2-D Array is:\n";
    //   for(i=0;i<2;i++)
    //   {
    //   	for(j=0;j<2;j++)
    //   	{
    //   		cout<<"\t"<<s[i][j];
    // 	}
    // 	cout<<endl;
    //   }

    int r, c;

    cout << "Enter the row number " << endl;
    cin >> r;

    cout << "Enter the row number " << endl;
    cin >> c;

    int matrix[r][c];

    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "\n matrix[" << i << "][" << j << "]" << endl;
            cin >> matrix[i][j];
        }
    }

    cout << "\nThe 2-D Array is:\n";

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "\t" << matrix[i][j];
        }
        cout << endl;
    }
}
