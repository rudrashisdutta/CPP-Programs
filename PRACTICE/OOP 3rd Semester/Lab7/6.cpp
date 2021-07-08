#include<iostream>
using namespace std;
class COMPLEX{
    int real,imaginery;
    public:
    COMPLEX(){
        cout<<"Real:\t";cin>>real;
        cout<<"Imaginery:\t";cin>>imaginery;
    }
    COMPLEX(int n){
        
    }
    friend COMPLEX operator+(COMPLEX,COMPLEX);
    friend COMPLEX operator*(COMPLEX,COMPLEX);
    void printComplex(){
        cout<<real<<" + "<<imaginery<<"i";
    }
};
COMPLEX operator+(COMPLEX n1,COMPLEX n2){
    COMPLEX res(1);
    res.real = n1.real + n2.real;
    res.imaginery = n1.imaginery + n2.imaginery;
    return res;
}
COMPLEX operator*(COMPLEX n1,COMPLEX n2){
    COMPLEX res(1);
    res.real = n1.real * n2.real - n1.imaginery * n2.imaginery;
    res.imaginery = n1.imaginery * n2.real + n1.real * n2.imaginery;
    return res;
}
int main(){
    COMPLEX com1,com2;
    cout<<"Result of addition:\t";
    (com1 + com2).printComplex();
    cout<<"\nResult of multiplication:\t";
    (com1 * com2).printComplex();
}