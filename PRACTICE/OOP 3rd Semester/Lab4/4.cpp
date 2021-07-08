#include<iostream>
using namespace std;
class COMPLEX{
    int real,imaginery;
    public:
    COMPLEX(int i){
        cout<<"Real:\t";
        cin>>real;
        cout<<"Imaginery:\t";
        cin>>imaginery;
    }
    COMPLEX(){}
    friend COMPLEX add(COMPLEX num1,COMPLEX num2);
    void printComplex(){
        cout<<real<<" + "<<imaginery<<"i";
    }
};
COMPLEX add(COMPLEX num1,COMPLEX num2){
    COMPLEX added;
    added.real = num1.real + num2.real;
    added.imaginery = num1.imaginery + num2.imaginery;
    return added;
}
int main(){
    COMPLEX num1(1),num2(1);
    COMPLEX added;
    added = add(num1,num2);
    cout<<"Result of addition: \t";
    added.printComplex();
}