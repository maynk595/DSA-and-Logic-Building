#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1>0 && s2>0 && s3>0 && s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
       if(s1==s2 && s2==s3){
         cout<<"It's a equilateral triangle";
       }
       else if(s1==s2 || s2==s3 || s1==s3){
        cout<<"It's a isosceles triangle";
       }
       else{
        cout<<"It's a scalene triangle";
       }
    }
    else{
        cout<<"It is not a valid tringle";
    }
    return 0;
}