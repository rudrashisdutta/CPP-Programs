#include<iostream>
using namespace std;
bool isPrime(int number){
    int i = number,count = 0;
    while(i>0){
        if(number%i == 0)
        count++;
        i--;
    }
    if(count == 2)
    return true;
    else
    return false;
}
void factors(int number){
    int factor = number;
    while(factor>1){
        if(number%factor == 0){
            if(isPrime(factor))
            cout<<factor<<"\n";
        }
        factor--;
    }
}
int main(){
    int number;
    cout<<"Enter the number:\t";
    cin>>number;
    factors(number);
}