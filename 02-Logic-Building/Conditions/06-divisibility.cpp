#include<iostream>
using namespace std;
int main(){
    int first,second;
    cin>>first>>second;
    if(second==0){
        cout<<"Can't divided by zero";
    }
    else if(first % second != 0){
        cout<<first<<" is not divisible by "<<second;
    }
    else{
        cout<<first<<" is divisible by "<<second;
    }
    return 0;
}