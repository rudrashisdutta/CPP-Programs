#include<iostream>
using namespace std;
class COMPLEX{
    int real, imaginery;
    public:
    COMPLEX(){
        cout<<"Real:\t";
        cin>>real;
        cout<<"Imaginery:\t";
        cin>>imaginery;
    }
    COMPLEX(COMPLEX complex1,COMPLEX complex2){
        real = complex1.real + complex2.real;
        imaginery = complex1.imaginery + complex2.imaginery;
    }
    void printComplex(){
        cout<<real<<" + "<<imaginery<<"i";
    }
};
int main(){
    COMPLEX complex1,complex2,result(complex1,complex2);
    cout<<"Result of adition of the entered complex numbers:\t";result.printComplex();
}