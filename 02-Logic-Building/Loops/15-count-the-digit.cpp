#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    if(n != 0){
        while(n != 0){
            count++;
            n /= 10;
        }
        cout<<"It's a "<<count<<" digit number.";
    }
    else{
        cout<<"It's a 1 digit number.";
    }
    return 0;
}