#include<iostream>
using namespace std;
int main(){
    int n , count = 0;
    cin >> n;
    while(n != 0){
        int rem = n % 10 ;
        if(rem % 2 == 0 || rem > 6){
            count++;
        }
        n /= 10;
    }
    cout<<"Their are "<<count<<" digits that are divisible by 2 or greater than 6.";
    return 0;
}