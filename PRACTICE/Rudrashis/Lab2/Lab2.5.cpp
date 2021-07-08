#include<iostream>
using namespace std;

void SUM(int a,int b=10,int c=20){
    int sum=a+b+c;
    cout<<"\nSummation of 3 numbers = "<<sum;
}
int main(){
    SUM(5);
    SUM(5,15);
}