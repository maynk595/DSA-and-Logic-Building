//A triangle is valid if the the sum of any two side is greater than the third side.

#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1>0 && s2>0 && s3>0 && s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
        cout<<"It's a valid triangle";
    }
    else{
        cout<<"It's not a valid triangle";
    }
    return 0;
}