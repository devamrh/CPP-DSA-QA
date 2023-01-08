#include <iostream>
#include<numeric>

using namespace std;

int main(){

// Soltution - 01

//   int arr[100],storage,i;
//    int sum{0};
//
//
//    cout << "Please enter the numbers of elements of array" << endl;
//    cin>>storage;
//
//    cout << "Please enter the numbers of array" << endl;
//
//    for(i=0; i<storage; i++)
//    {
//        cin>>arr[i];
//    }
//
//    for(i=0; i<storage; i++){
//        sum = sum + arr[i];
//
//    }
//    cout<<"The sum of array's is : "<<sum<<endl;


//Solution - 02

    int i,size,arr[10],j;

    cout<<"Enter the size of the array :"<<endl;
    cin>>size;

    cout<<"Enter the number of elements of array :"<<endl;

    for(i=0; i<size; i++){
        cin>>arr[i];
    }

    int sum = 0;

    sum = accumulate(arr,arr+size,sum);

    cout<<"The sum of elements of array is : "<<sum<<endl;





    return 0;
}
