#include<iostream>
using namespace std;
int main(){
    int n , palin = 0;
    cin>>n;
    int temp = n;
    while(n>0){
        int rem = n % 10 ;
            palin = palin * 10 + rem ;
            n /= 10 ;
    }
    if(temp != palin){
        cout<<"Not Palindrome";
    }
    else{
        cout<<"Palindrome";
    }
    return 0;
}