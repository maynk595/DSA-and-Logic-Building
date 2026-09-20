#include<iostream>
using namespace std;
int main(){
    int n , divisible=0;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        if(i%3==0){
            divisible++;
        }
    }
    cout<<"Total number divisible by 3 is "<<divisible;
    return 0;
}