#include<iostream>
using namespace std;
int lastDigit(int number){
    return number%10;
}
int main(){
    int num1,num2;
    cout<<"Enter the first number: \t";
    cin>>num1;
    cout<<"Enter the second number:\t";
    cin>>num2;
    if(lastDigit(num1) == lastDigit(num2))
    cout<<"The last digit of both the numbers are same.";
    else
    cout<<"The last digit is not same.";
}