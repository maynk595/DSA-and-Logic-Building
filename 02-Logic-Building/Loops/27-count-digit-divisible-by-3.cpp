#include<iostream>
using namespace std;
int main(){
    int n , count = 0;
    cin>>n;
    while(n != 0){
        int rem = n % 10;
        if(rem % 3 == 0){
            count++;
        }
        n /= 10;
    }
    cout<<"There are "<<count<<" digits divisible by 3.";
    return 0;
}