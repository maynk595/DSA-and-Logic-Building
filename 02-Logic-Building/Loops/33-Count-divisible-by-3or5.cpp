#include<iostream>
using namespace std;
int main(){
    int n , count = 0;
    cin >> n;
    while(n != 0){
        int rem = n % 10 ;
        if(rem % 3 == 0 || rem % 5 == 0){
            count++;
        }
        n /= 10 ;
    }
    cout <<"Their are "<<count<<" digits that are divisible by 3 or 5.";
    return 0 ;
}