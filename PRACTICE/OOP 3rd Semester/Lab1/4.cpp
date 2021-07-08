#include<iostream>
using namespace std;
bool prime(int n){
    int i = n,count = 0;
    while(i>0){
        if(n%i == 0)
        count++;
        i--;
    }
    if(count == 2)
    return true;
    else
    return false;
}
int main(){
    int number;
    cout<<"Enter a number:\t";
    cin>>number;
    if(prime(number))
    cout<<number<<" is a prime number.";
    else
    cout<<number<<" is not a prime number.";
}