#include<iostream>
using namespace std;
int main(){
    int n , rev = 0;
    cin>>n;
    while(n>0){ // we use while loop because we don't know the number of iteration beforehand,but we know the condition for stopping.
        int rem = n % 10 ; // it return the last digit of a number.
            rev = rev * 10 + rem ;
            n /= 10 ;  // it remove the last digit of a number.
    }
    cout<<"Reverse = "<<rev;
    return 0;
}