#include<iostream>
#include<algorithm>
#include<array>
using namespace std;

int main(){

    int i,num,arr[10],count;

    cout<<"Enter the number of elements in array :"<<endl;
    cin>>count;

    cout<<"Enter "<<count<<" numbers :"<<endl;

    for(i=0; i<count; i++){
        cin>>arr[i];
    }

    cout<<"Enter the number you want to search :"<<endl;
    cin>>num;


    for(i=0; i<count; i++){
        if(arr[i]==num){
            cout<<num<<" is found at index : "<<i<<endl;
            break;

        }



    }
     /*if(arr[i]==count){
            cout<<"Element not found in index";
        }*/



    /*for(i=0;i<arr;i++){
        cin>>arr[i];
    }*/





}
