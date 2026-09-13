#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n%2==0 && n>0){
        cout<<n<<" is a even and positive.";
    }
    else if(n%2 == 0 && n<0){
        cout<<n<<" is a even and negative.";
    }
    else if(n%2 != 0 && n<0){
        cout<<n<<" is a odd and negative.";
    }
    else if(n%2 != 0 && n>0){
        cout<<n<<" is a odd and positive.";
    }
    else{
        cout<<n<<" is not negative and nor positive but it is even because zero is even.";
    }
    return 0;
}