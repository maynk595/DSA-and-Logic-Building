#include<iostream>
using namespace std;
int main(){
   int n , prod = 1;
   cin>>n;
   while(n != 0){
       int rem = n % 10;
           prod *= rem;
           n /= 10;
   }
   cout<<"Product = "<<prod;
   return 0;
}