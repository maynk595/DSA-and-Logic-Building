#include<iostream>
using namespace std;
int main(){
    int n , smallest = 9;
    cin>>n;
    while (n != 0){
       int rem = n % 10;
       if(smallest > rem){
          smallest = rem ;
       }
       n /= 10;
    }
    cout<<"smallest digit = "<<smallest;
    return 0;
}