#include<iostream>
using namespace std;
class abc{
    int x;
    public:
    abc(int s){
        x=s;
        cout<<"The constructor was called!";
    }
    void printX(){
        cout<<"\nThe value of x=\t"<<x;
    }
    ~abc(){
        cout<<"\nThe destructor was called!";
    }
};
int main(){
    int d=12;
    abc a(10);
    a.printX();
    cout<<"\nd="<<d;
}