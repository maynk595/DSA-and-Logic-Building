#include<iostream>
using namespace std;
int main(){
    int n , odd = 0;
    cin >> n ;

    while (n != 0){
        int rem = n % 10 ;
        if(rem % 2 != 0 && rem > 5){
            odd++;
        }
        n /= 10 ;
    }
    cout<<"Their are "<<odd<<" digit that are odd and greater than 5.";
    return 0;
}