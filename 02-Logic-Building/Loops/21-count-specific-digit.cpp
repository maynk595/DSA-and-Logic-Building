#include<iostream>
using namespace std;
int main(){
    int n , digit , count = 0 ;
    cin >> n >> digit;
    while (n != 0){
        int rem = n % 10;
            if(rem == digit){
                count++;
            }
            n /= 10;
    }
    cout<<digit<<" appears "<<count<<" times";
    return 0;
}