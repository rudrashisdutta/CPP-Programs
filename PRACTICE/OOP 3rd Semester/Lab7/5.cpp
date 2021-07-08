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
    COMPLEX operator+(COMPLEX n){
        COMPLEX res(1);
        res.real = real + n.real;
        res.imaginery = imaginery + n.imaginery;
        return res;
    }
    COMPLEX operator*(COMPLEX n){
        COMPLEX res(1);
        res.real = real * n.real - imaginery * n.imaginery;
        res.imaginery = imaginery * n.real + real * n.imaginery;
        return res;
    }
    void printComplex(){
        cout<<real<<" + "<<imaginery<<"i";
    }
};
int main(){
    COMPLEX com1,com2;
    cout<<"Result of addition:\t";
    (com1 + com2).printComplex();
    cout<<"\nResult of multiplication:\t";
    (com1 * com2).printComplex();
}