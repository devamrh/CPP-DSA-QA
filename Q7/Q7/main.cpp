#include <iostream>
using namespace std;

int main()
{
    int size,i,count,arr[10],num;

    cout << "Enter the size of array " << endl;
    cin>>size;

    cout<<"-------------------------"<<endl;

    cout<<"Enter the numbers of the array "<<endl;

    for(i=0; i<size; i++){
        cin>>arr[i];
    }

    count = 0;

    cout<<"Enter the number you're searching"<<endl;
    cout<<"-------------------------"<<endl;
    cin>>num;

    for(i=0; i<size; i++){
        if(arr[i]==num){
            count = count + 1;
        }
        else{
            arr[i];
        }
    }
    cout<<"-------------------------"<<endl;

    cout<<"The Count is :"<<count<<endl;

    return 0;
}
