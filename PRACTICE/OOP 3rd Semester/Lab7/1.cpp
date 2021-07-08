#include<iostream>
using namespace std;
class number{
    int num1,num2;
    public:
    number(){
        cout<<"Enter the two numbers:\n";
        cin>>num1>>num2;
    }
    number(int num3,int num4){
        num1 = num3;
        num2 = num4;
    }
    number operator-(){
        number n(-num1,-num2);
        return n;
    }
    void printNumbers(){
        cout<<num1<<" and "<<num2;
    }
};
int main(){
    number n1;
    n1=-n1;
    n1.printNumbers();
}