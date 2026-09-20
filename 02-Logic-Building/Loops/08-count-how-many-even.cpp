#include<iostream>
using namespace std;
int main(){
    int n , count=0;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        if(i%2==0){
            count++;
        }
    }
    cout<<"Total even number are "<<count;
    return 0;
}