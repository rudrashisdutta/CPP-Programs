#include<iostream>
using namespace std;
class second;
class first{
    int num1;
    public:
    void setNum(int num){
        num1=num;
    }
    friend void MAX(first &,second &);
}obj1;
class second{
    int num2;
    public:
    void setNum(int num){
        num2=num;
    }
    friend void MAX(first &,second &);
}obj2;
void MAX(first &f,second &s){
    if(f.num1>s.num2)
        cout<<"Greater\t"<<f.num1<<" (number is present in the 'first' class)";
    else if(f.num1<s.num2)
        cout<<"Greater\t"<<s.num2<<" (number is present in the 'second' class)";
    else
        cout<<"The numbers in the classes are same.";
}
int main(){
    int num1,num2;
    cout<<"Enter the first number: \t";
    cin>>num1;
    cout<<"Enter the second number:\t";
    cin>>num2;
    obj1.setNum(num1);
    obj2.setNum(num2);
    MAX(obj1,obj2);
}