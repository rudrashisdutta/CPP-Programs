#include<iostream>
using namespace std;
void swap(int num1,int num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void swap(int *num1,int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void swapA(int &num1,int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int main(){
    int num1 = 5,num2 = 10;
    cout<<"Before swapping: "<<num1<<" "<<num2;
    swap(num1,num2);
    cout<<"\nAfter swapping by call by value: "<<num1<<" "<<num2;
    swap(&num1,&num2);
    cout<<"\nAfter swapping by call by reference: "<<num1<<" "<<num2;
    swapA(num1,num2);
    cout<<"\nAfter swapping by call by address: "<<num1<<" "<<num2;
}