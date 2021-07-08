#include<iostream>
using namespace std;
class addComp{
    int real,imag;
    public:
    addComp(){}
    addComp(int r){
        real=r;
        imag=r;
    }
    addComp(int r,int i){
        real=r;
        imag=i;
    }
    addComp(addComp x,addComp y){
        real=x.real+y.real;
        imag=x.imag+y.imag;
    }
    void printComplex(){
        cout<<real<<" + "<<imag<<"i";
    }
    void setVal(int r,int i){
        real=r;
        imag=i;
    }
};
int main(){
    addComp a1;
    a1.setVal(1,8);
    addComp a2(5);
    addComp sum1(a1,a2);
    cout<<"Default constructor and constructor with one parameter used!\n\n";
    cout<<"(";
    a1.printComplex();
    cout<<") + (";
    a2.printComplex();
    cout<<") = (";
    sum1.printComplex();
    cout<<")\n\n\n";
    addComp a3(2,4);
    addComp a4(5,7);
    addComp sum2(a3,a4);
    cout<<"Contructor with two parameters used to set values!\n\n";
    cout<<"(";
    a3.printComplex();
    cout<<") + (";
    a4.printComplex();
    cout<<") = (";
    sum2.printComplex();
    cout<<")";
}