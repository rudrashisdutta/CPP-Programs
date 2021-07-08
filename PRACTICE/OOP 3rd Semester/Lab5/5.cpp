#include<iostream>
using namespace std;
class CLASS{
    int value;
    public:
    CLASS(){
        cout<<"Enter the value:\t";
        cin>>value;
    }
    CLASS(const CLASS &obj){
        cout<<"\nCOPY CONSTRUCTOR WOKRING.";
        value = obj.value;
    }
    void showVal(){
        cout<<"Value = "<<value;
    }
};
int main(){
    CLASS obj;
    obj.showVal();
    CLASS obj1(obj);
    cout<<"\nCopied constructor:\n";obj1.showVal();
}