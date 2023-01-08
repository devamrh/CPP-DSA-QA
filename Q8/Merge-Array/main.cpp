#include <iostream>
#include<array>

using namespace std;

int main()
{

//    int i,size,count01,count02,count,n,m;
//
//    int arr01[5]={40,30,70,90,100};
//    int arr02[7]={10,15,45,20,65,6,1};
//    //int m_arr[12] ={};
//
//    count01 = sizeof(arr01)/sizeof(arr01[0]);
//    count02 = sizeof(arr02)/sizeof(arr02[0]);
//    count=count01+count02;
//
//    int m_arr[m]={};
//
//
//    std::cout<<"The count of array 01 :"<<count01<<endl;
//
//    for(i=0; i<count01; i++,m++){
//        arr01[i]=m_arr[i];
//    }
//
//    std::cout<<"The count of array 01 :"<<m_arr[i]<<endl;


    int i,j,k;
    int fstarr[10],scndarr[10],m_arr[25];
    int fstsize,scndsize,totalsize;


    cout<<"Enter the size of first array "<<endl;
    cin>>fstsize;
    cout<<"-------------------------------------------------"<<endl;

    cout<<"Enter the elements of first array "<<endl;
    for(i=0;i<fstsize; i++){

        cin>>fstarr[i];

       m_arr[i]=fstarr[i];

    }

    //cout<<"Enter the elements of first array "<<m_arr[i]<<endl;

    cout<<"-------------------------------------------------"<<endl;

    cout<<"Enter the size of second array "<<endl;
    cin>>scndsize;

    totalsize=fstsize+scndsize;


     cout<<"-------------------------------------------------"<<endl;

    for(i=0; i<scndsize; i++){
        cin>>scndarr[i];

        m_arr[i+fstsize]=scndarr[i];
    }
    cout<<"-------------------------------------------------"<<endl;
    cout<<"---------------------merged array----------------"<<endl;
    for(i=0; i<totalsize; i++){
    cout<<m_arr[i]<<" ";

    }
    return 0;
}

/* Solved */
