#include<iostream>
using namespace std;
int main(){
    int n , even = 0 , odd = 0 ;
    cin >> n;
    while (n != 0){
        int rem = n % 10;
            if(rem % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
            n /= 10;
    }
    cout<<"Even Digits = "<<even<<endl;
    cout<<"Odd Digits = "<<odd<<endl;
    return 0;
}