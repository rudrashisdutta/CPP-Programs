#include<iostream>
using namespace std;
class COMPLEX{
    int real, imaginery;
    void enterValue(){
        cout<<"Real:\t";
        cin>>real;
        cout<<"Imaginery:\t";
        cin>>imaginery;
    }
    public:
    COMPLEX(){}
    COMPLEX(int value){
        real = value;
        imaginery = value;
    }
    COMPLEX(int r,int i){
        real = r;
        imaginery = i;
    }
    COMPLEX(COMPLEX complex1,COMPLEX complex2){
        real = complex1.real + complex2.real;
        imaginery = complex1.imaginery + complex2.imaginery;
    }
    void enterComplex(){
        cout<<"Real:\t";
        cin>>real;
        cout<<"Imaginery:\t";
        cin>>imaginery;
    }
    void printComplex(){
        cout<<real<<" + "<<imaginery<<"i";
    }
};
int main(){
    COMPLEX complex1;
    complex1.enterComplex();
    COMPLEX complex2(10),complex3(5,15);
    COMPLEX result1(complex1,complex2),result2(result1,complex3);
    cout<<"Result of adition of the first and second complex numbers:\t";result1.printComplex();
    cout<<"\nResult of addition of all the three complex numbers:\t";result2.printComplex();
}