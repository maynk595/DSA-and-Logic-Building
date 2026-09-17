#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    char ch;
    cin>>ch;
    if (ch=='+'){
        cout<<a+b;
    }
    else if(ch=='-'){
        cout<<a-b;
    }
    else if(ch=='*'){
        cout<<a*b;
    }
    else if(ch=='/'){
        if(b==0){
            cout<<"can't divide by zero";
        }
        else{
            cout<<a/b;
        }
    }
    else if(ch=='%'){
        if(b==0){
            cout<<"can't divide by zero";
        }
        else{
            cout<<a%b;
        }
    }
    else{
        cout<<"invalid operator";
    }
    return 0;
}