#include <iostream>

using namespace std;

int main()
{   int num01;
    float num02;
    double num03;
    char alpha,comma;

    cout <<"Enter the data types"<< endl;
    cin>>num01>>comma>>num02>>comma>>num03>>comma>>alpha;

    cout<<sizeof(num01)<<" "<<sizeof(num02)<<" "<<sizeof(num03)<<" "<<sizeof(alpha)<<endl;



    return 0;
}


//solved
