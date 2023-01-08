#include<iostream>
using namespace std;

int main(){

    int i,j,r,c;
    int sum[100][100],a[100][100],b[100][100];

    cout<<"Enter the number of row:"<<" ";
    cin>>r;

    cout<<"Enter the number of column:"<<" ";
    cin>>c;

    cout<<"-----------1st Array----------"<<endl;

    for(i=0; i<r; i++){
        for(j=0;j<c; j++){
            cout<<"Enter the elements of matrix 01 "<<"["<<i<<"]["<<j<<"] :";
            cin>>a[i][j];
        }

    }

    cout<<"-----------2nd Array----------"<<endl;

    for(i=0; i<r; i++){
        for(j=0;j<c; j++){
            cout<<"Enter the elements of matrix 02 "<<"["<<i<<"]["<<j<<"] :";
            cin>>b[i][j];
        }
    }

    cout<<"---------------------------"<<endl;


    for(i=0; i<r; i++){
        for(j=0;j<c; j++){

          sum[i][j]=a[i][j] + b[i][j];

        }
    }
    cout<<"----------Array Summation-----------"<<endl;
    for(i=0; i<r; i++){
        for(j=0;j<c; j++){

        cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }
    }

}
