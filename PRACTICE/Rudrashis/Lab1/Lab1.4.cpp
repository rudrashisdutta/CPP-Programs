#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:\t";
    cin>>num;
    int x=0;
    for(int i=1;i<=num;i++){
        if(num%i==0)
        x++;
    }
    if(x==1){
        cout<<"The number "<<num<<" is co-prime.";
    }
    else if(x==2){
        cout<<"The number "<<num<<" is a prime number.";
    }
    else
        cout<<"The number "<<num<<" is not a prime number.";
}