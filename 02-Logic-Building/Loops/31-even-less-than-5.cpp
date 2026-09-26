#include<iostream>
using namespace std;
int main(){
    int n , even = 0;
    cin >> n;
    while(n != 0){
        int rem = n % 10 ;
        if (rem % 2 == 0 && rem < 5){
            even++ ;
        }
        n /= 10 ;
    }
    cout<<"Their are "<<even<<" digits that are even and less than 5.";
    return 0 ;
}