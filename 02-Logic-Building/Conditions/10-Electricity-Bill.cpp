#include<iostream>
using namespace std;
int main(){
    int unit,bill=0;
    cin>>unit;
    if(unit<=100){
       bill=unit*5;
    }
    else if(unit<=200){
        bill=(unit*5)+((unit-100)*7);
    }
    else if(unit<=400){
        bill=(100*5)+(100*7)+((unit-200)*10);
    }
    else{
        bill=(100*5)+(100*7)+(200*10)+((unit-400)*12);
    }
    cout<<"Total Electricity Bill = "<<bill<<endl;
    return 0;
}