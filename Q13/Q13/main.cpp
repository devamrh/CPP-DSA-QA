#include<iostream>
using namespace std;
//fuction starts
int checkPalindrome(int n)
{
    int temp,rem,rev=0;
    temp=n;
    while(temp>0){
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }

    if(rev==n){
        return 0;
    }
    else{
        return 1;
    }

}

int main(){

    int num,val;

    cout<<"Enter the number"<<endl;
    cin>>num;

    val = checkPalindrome(num);

    if(val==0){
        cout<<"It's palindrome"<<endl;

    }
    else{
        cout<<"It's not palindrome"<<endl;
    }

}

//function ends


























//#include <iostream>
//
//using namespace std;
//
//int chekpalindrome(int n){
//
//    int digit,num,temp_num,rev=0;
//
//    temp_num=num;
//
//    while(temp_num>0){
//        digit = temp_num%10;
//        rev =  (rev*10) + digit;
//        temp_num = temp_num/10;
//
//    }
//
//    if(rev==num){
//        return 0;
//
//    }
//    else{
//      return 1;
//    }
//
//}
//
//
////int main(){
////
////    int num,val;
////     cout<<"Enter the number :";
////     cin>>num;
////
////     val=chekpalindrome(num);
////
////     if(val==0){
////        cout<<"Thats Palindrome"<<endl;
////     }
////     else{
////        cout<<"That's not Palindrome"<<endl;
////     }
////
////     return 0;
////
////
////
////
////}
//
//#include<iostream>
//using namespace std;
//int checkPalindrome(int);
//int main()
//{
//    int num, val;
//    cout<<"Enter the Number: ";
//    cin>>num;
//    val = checkPalindrome(num);
//    if(val==0)
//        cout<<"\nIt is a Palindrome Number";
//    else
//        cout<<"\nIt is not a Palindrome Number";
//    cout<<endl;
//    return 0;
//}
//int checkPalindrome(int n)
//{
//    int temp, rem, rev=0;
//    temp = n;
//    while(temp>0)
//    {
//        rem = temp%10;
//        rev = (rev*10)+rem;
//        temp = temp/10;
//    }
//    if(rev==n)
//        return 0;
//    else
//        return 1;
//}


//int main()
//{
//    int num,digit,rev=0;
//
//    cout<<"Enter the number :"<<" ";
//    cin>>num;
//    int temp_num = num;
//
//    while(temp_num>0){
//        digit = temp_num%10;
//        rev =(rev*10) + digit;
//        temp_num = temp_num/10;
//
//    }
//
//
//    cout<<"Digit :"<<digit<<endl;
//    cout<<"Reverse :"<<rev<<endl;
//    cout<<"Number :"<<num<<endl;
//
//
//        if(rev==num){
//            cout<<"The number is palindrome"<<endl;
//
//        }
//        else {
//            cout<<"The number is not palindrome"<<endl;
//        }}
