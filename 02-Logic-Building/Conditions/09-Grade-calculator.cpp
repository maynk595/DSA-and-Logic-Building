#include<iostream>
using namespace std;
int main(){
    int grade;
    cin>>grade;
    if(grade>=90 && grade<=100){
        cout<<"Grade A";
    }
    else if(grade>=80 && grade<=89){
        cout<<"Grade B";
    }
    else if(grade>=70 && grade<=79){
        cout<<"Grade C";
    }
    else if(grade>=60 && grade<=69){
        cout<<"Grade D";
    }
    else if(grade<60 && grade>=0){
        cout<<"Grade F";
    }
    else{
       cout<<"Invalid marks";
    }
    return 0;
}