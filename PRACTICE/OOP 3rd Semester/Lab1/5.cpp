#include<iostream>
using namespace std;
int gcd(int num1,int num2){
    int div,GCD=1;
    if(num1<num2)
    div = num1;
    else
    div = num2;
    while(div>1){
        if(num1%div == 0 && num2%div == 0){
            GCD*=div;
            num1/=div;
            num2/=div;
        }
        div--;
    }
    return GCD;
}
int main(){
    int num1,num2;
    cout<<"Enter a number:\t";
    cin>>num1;
    cout<<"Enter another number:\t";
    cin>>num2;
    int GCD = gcd(num1,num2);
    cout<<"The greatest common divisor of "<<num1<<" and "<<num2<<" is "<<GCD<<".";
}