#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<(a&b)<<endl; // bitwise AND
    cout<<(a|b)<<endl; // bitwise OR
    cout<<(a^b)<<endl; // bitwise XOR (in XOR different bit give 1 and same bit gives 0)
    cout<<(~a)<<endl; // bitwise NOT (2's complement is the  method computer use to represent negative numbers)
    cout<<(a<<1)<<endl; // left shift (it left one bit)
    cout<<(a>>1)<<endl; // right shift (it write shift one bit)
    return 0;
}