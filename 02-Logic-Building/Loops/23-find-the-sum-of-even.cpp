#include<iostream>
using namespace std;
int main(){
    int n , sum = 0;
    cin>>n;
    while(n != 0){
        int rem = n % 10 ;
        if (rem % 2 == 0){
            sum += rem;
        }
        n /= 10;
    }
    cout << "Sum Of All Even digit = "<<sum;
    return 0;
}