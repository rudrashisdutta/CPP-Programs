#include<iostream>
using namespace std;
class number{
    int num1,num2;
    public:
    number(){
        cout<<"Enter the two numbers:\n";
        cin>>num1>>num2;
    }
    friend number operator-(number &);
    void print(){
        cout<<num1<<" and "<<num2;
    }
};
number operator-(number &n){
    n.num1 = -n.num1;
    n.num2 = -n.num2;
    return n;
}
int main(){
    number n;
    n=-n;
    n.print();
}