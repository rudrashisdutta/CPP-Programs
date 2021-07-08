#include<iostream>
using namespace std;
class numberTwo;
class numberOne{
    int number;
    public:
    numberOne(){
        cout<<"\nEnter a number:\t";
        cin>>number;
    }
    friend void greatest(numberOne num1,numberTwo num2);
};
class numberTwo{
    int number;
    public:
    numberTwo(){
        cout<<"\nEnter a number:\t";
        cin>>number;
    }
    friend void greatest(numberOne num1,numberTwo num2);
};
void greatest(numberOne num1,numberTwo num2){
    if(num1.number>num2.number){
        cout<<num1.number<<" is greater than "<<num2.number;
    }
    else if(num1.number<num2.number){
        cout<<num2.number<<" is greater than "<<num1.number;
    }
    else{
        cout<<num1.number<<" and "<<num2.number<<" are equal.";
    }
}
int main(){
    numberOne num1;
    numberTwo num2;
    greatest(num1,num2);
}