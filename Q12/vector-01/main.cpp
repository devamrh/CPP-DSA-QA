//#include <iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//
//bool test(std::vector <int> nums){
//
// std::sort(nums.begin(), nums.end());
//
//    for(int i=0; i<nums.size() -1; i++){
//        if (nums[i+1] = nums[i]+1)
//        {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//int main()
//{
//    //vector<int> nums = {1, 2 ,5, 7, 4, 3, 6};
//    vector <int> nums ={1,2,4,7,6,3,0};
//
//    cout<<"The num size is :"<<nums.size()<<endl;
//
//    for(int x:nums){
//        cout<<x<<" ";
//
//    }
//    cout<<"Consequentive Num Is :"<<test(nums)<<endl;
//
//    return 0;
//}

#include<iostream>
#include<algorithm>
#include<vector>

//bool testnum( std::vector <int> number)
//{
    sort(number.begin(),number.end());
//}

int main()
{
    vector<int> number = {1,2,3,4,5,6};
    cout<<"The sorted number is :"<<number<<endl;

}
