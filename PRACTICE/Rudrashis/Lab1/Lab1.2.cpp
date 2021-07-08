#include<iostream>
using namespace std;
int returnLast(int num){
    int last=num%10;
    return last;
}
int negativePositive(int num){
    if(num<0)
    num-=(2*num);
    return num;
}
int main(){
    int num1,num2;
    cout<<"Enter a positive number:\t";
    cin>>num1;
    cout<<"Enter another positive number:\t";
    cin>>num2;
    num1=negativePositive(num1);
    num2=negativePositive(num2);
    int x,y;
    x=returnLast(num1);
    y=returnLast(num2);
    if(x==y){
        cout<<"\n"<<num1<<" and "<<num2<<" have the same last digit:\t"<<x;
    }
    else{
        cout<<"\nThe last digit of "<<num1<<" and "<<num2<<" are not same.";
    }
}