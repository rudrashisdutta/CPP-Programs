#include<iostream>
using namespace std;
class number{
    int num1,num2;
    public:
    number(){
        cout<<"1st Number:\t";
        cin>>num1;
        cout<<"2nd Number:\t";
        cin>>num2;
    }
    number(int n){}
    number operator+(int num){
        number n(1);
        n.num1=num1+num;
        n.num2=num2+num;
        return n;
    }
    friend number operator+(int, number);
    void display(){
        cout<<num1<<" and "<<num2;
    }
};
number operator+(int n1,number n2){
    return n2 + n1;
}
int main(){
    number n1,n2;
    cout<<"Result:\t";
    (n1+5).display();
    cout<<"\n";
    (10+n2).display();
}