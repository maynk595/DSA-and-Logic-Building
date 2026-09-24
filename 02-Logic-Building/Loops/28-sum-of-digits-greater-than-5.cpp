#include<iostream>
using namespace std;
int main(){
    int n , sum = 0;
    cin>>n;
    while(n != 0){
        int rem = n % 10;
        if(rem > 5){
            sum += rem;
        }
        n /= 10;
    }
    cout<<"Sum of digits greater than 5 = "<<sum;
    return 0;
}