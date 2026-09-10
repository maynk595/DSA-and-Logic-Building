#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num%4==0 && num%100!=0 || num%400==0){
        cout<<num<<" is a leap year."<<endl;
    }
    else{
        cout<<num<<" is not a leap year."<<endl;
    }
    return 0;
}