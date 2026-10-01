#include<iostream>
using namespace std;
int main(){
    int n , count = 1;
    cin >> n;
    for (int i = 1 ; i <= n ; i++){
        // Increasing part of the triangle.
        for (int j = 1 ; j <= i ; j++){
            cout<<j<<" ";
        }
        // Decreasing part of the triangle.
            for(int k = i-1 ; k >= 1 ; k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}