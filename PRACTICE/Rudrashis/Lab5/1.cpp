#include<iostream>
using namespace std;
class addComp{
    int real,imag;
    public:
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
};
int main(){
    int a,b,c,d;
    cout<<"Enter the real part of the first number:\t";
    cin>>a;
    cout<<"Enter the imaginary part of the first number:\t";
    cin>>b;
    cout<<"Enter the real part of the second number:\t";
    cin>>c;
    cout<<"Enter the imaginary part of the second number:\t";
    cin>>d;
    addComp a1(a,b);
    addComp a2(c,d);
    addComp sum(a1,a2);
    cout<<"(";
    a1.printComplex();
    cout<<") + (";
    a2.printComplex();
    cout<<") = (";
    sum.printComplex();
    cout<<")";
}