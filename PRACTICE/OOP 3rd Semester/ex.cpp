#include<iostream>
using namespace std;
class base{
    public:
    virtual void display(){cout<<"In base\t";}
    virtual void show(){cout<<"Show in base\n";}
};
class derived:public base{
    void show(){cout<<"....";}
};
int main(){
    
}