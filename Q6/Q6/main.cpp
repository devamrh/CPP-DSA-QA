#include <iostream>
#include<numeric>

using namespace std;

int main()
{
    int arr[10],i,size,sum;

    cout << "Enter the size of array :" << endl;
    cin>>size;

    cout<<"Enter the numbers of the array :"<<endl;

    for(i=0; i<size; i++){
        cin>>arr[i];
    }

    sum = 0;

    for(i=0; i<size; i++){
        if(arr[i]%2==0){
            sum = sum + arr[i];
        }
        else{
            arr[i];
        }
    }

    cout<<"Final Result : "<<sum<<endl;



//ends

/*corrupted solution below*/

//    int arr[10],size, sum,i;
//
//     cout << "Enter the size of array :" << endl;
//     cin>>size;
//
//     cout<<"Enter the numbers of the array :"<<endl;
//     for(i=0; i<size; i++)
//        {
//        cin>>arr[i];
//     }
////     sum = 0;
//     for(i=0; i<size; i++){
//            if(arr[i]%2==0){
//                sum = accumulate(arr,arr+size,sum);
//            }
//            else{
//                arr[i];
//            }
//
//     }
//
//
//    cout<<"The sum is :"<<sum;
//
//
//
//    return 0;
}
