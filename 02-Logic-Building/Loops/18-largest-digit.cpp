#include<iostream>
using namespace std;
int main(){
    int n , largest = 0;
    cin>>n;
    while (n != 0){
       int rem = n % 10;
       if(largest < rem){
          largest = rem ;
       }
       n /= 10;
    }
    cout<<"Largest digit = "<<largest;
    return 0;
}