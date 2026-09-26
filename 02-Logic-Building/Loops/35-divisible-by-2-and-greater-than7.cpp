#include<iostream>
using namespace std;
int main(){
    int n , count = 0;
    cin >> n ;
    while(n != 0){
        int rem = n % 10 ;
        if(rem % 2 == 0 && rem > 7){
            count++;
        }
        n /= 10;
    }
    cout<<"Their are "<<count<<" digit are greater than 7 and divisible by 2.";
    return 0 ;
}