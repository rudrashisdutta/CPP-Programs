#include<iostream>
#include<iomanip>
using namespace std;
class A{
    public:
    A(){cout<<"hello world";}
};
int main(){
    for(int i=0;i<15;i+=4)
    A a1;
    return 0;
}