#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    cout << " Question no - 3 !" << endl;


    int arr[] = {10,15,45,20,25,6,1,100,65,99};



    int n = sizeof(arr)/sizeof(0);

    cout<<"The size of array is :"<<sizeof(arr)<<endl;
    cout<<"The size of array[0] is :"<<sizeof(arr[0])<<endl;


    cout<<"The n is : "<<n<<endl;

    sort(arr,arr+n);

    //cout<<"The array is : "<<sort(arr)<<endl;
    cout<<"The array is : "<<arr[0]<<endl;
    cout<<"The array + n is : "<<arr[1]<<endl;


    return 0;
}
