#include<iostream>
using namespace std;
int main(){
    int bill,total=0;
    cin>>bill;
    if(bill<0){
         cout<<"Invalid unit";
    }
    else if(bill<=100){
         total = bill*5;
    }
    else if(bill<=200){
         total = (100*5) + ((bill-100)*7);
    }
    else if(bill<=300){
         total = (100*5) + (100*7) + ((bill-200)*10);
    }
    else{
        total = (100*5) + (100*7) + (100*10) + ((bill-300)*15);
    }
    cout<<"Total Bill = "<<total;
    return 0;
}
