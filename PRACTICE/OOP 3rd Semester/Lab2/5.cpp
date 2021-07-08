#include<iostream>
using namespace std;
int SUM(int num1,int num2 = 10,int num3 = 20){
    return num1+num2+num3;
}
int main(){
    int num1 = 3,num2 = 7,num3 = 17;
    cout<<SUM(num1)<<"\n"<<SUM(num1,num2)<<"\n"<<SUM(num1,num2,num3);
}