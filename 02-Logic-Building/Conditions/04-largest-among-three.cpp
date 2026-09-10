#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3){
        cout<<num1<<" is the largest number."<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<num2<<" is the largest number."<<endl;
    }
    else if(num3>num1 && num3>num2){
        cout<<num3<<" is the largest number."<<endl;
    }
    else if (num1==num2 && num1>num3){
        cout<<num1<<" and "<<num2<<" are the largest numbers."<<endl;
    }
    else if (num1==num3 && num1>num2){
        cout<<num1<<" and "<<num3<<" are the largest numbers."<<endl;
    }
    else if (num2==num3 && num2>num1){
        cout<<num2<<" and "<<num3<<" are the largest numbers."<<endl;
    }
    else{
        cout <<"All three numbers are equal."<<endl;
    }
    return 0;
}