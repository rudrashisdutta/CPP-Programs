#include<iostream>
using namespace std;
class complex{
    int real, imaginery;
    public:
    complex(){
        cout<<"Real Part:\t";
        cin>>real;
        cout<<"Imaginery Part:\t";
        cin>>imaginery;
    }
    complex(complex num1,complex num2){
        real = num1.real + num2.real;
        imaginery = num1.imaginery + num2.imaginery;
    }
    void printComplex(){
        cout<<real<<" + "<<imaginery<<"i";
    }
};
int main(){
    cout<<"Enter the first number:\n";
    complex num1;
    cout<<"Enter the second number:\n";
    complex num2;
    cout<<"The resultant number is:\t";
    complex add(num1,num2);
    add.printComplex();
}