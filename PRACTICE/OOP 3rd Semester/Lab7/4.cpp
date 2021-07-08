#include<iostream>
using namespace std;
class number{
    int num1,num2;
    public:
    number(){
        cout<<"Enter the two numbers:\n";
        cin>>num1>>num2;
    }
    friend void operator++(number &n);
    friend void operator--(number &n);
    void print(){
        cout<<"\n"<<num1<<" and "<<num2;
    }
    void operator++(int n){
        ++num1;
        ++num2;
    }
    void operator--(int n){
        --num1;
        --num2;
    }
};
int main(){
    number n;
    ++n;
    n.print();
    --n;
    n.print();
}