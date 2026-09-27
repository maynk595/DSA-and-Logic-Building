#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    for(int i = n ; i >= 1 ; i--){
       for(int s = n-i ; s >= 1 ; s--){
         cout << " ";
        }
         for(int j = 1 ; j <= i ; j++){
              cout << "*";
         }
        cout<<endl;
     }
    return 0;
}