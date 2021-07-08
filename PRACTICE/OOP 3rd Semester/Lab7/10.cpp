#include<iostream>
using namespace std;
class number{
    int num;
    public:
    number(int n){
        cout<<"\nEnter new number:\t";
        cin>>num;
    }
    number(){}
    void* operator new(size_t size){
        cout<<"new overloaded";
        void *p = ::new number(size);
        return p;
    }
    void operator delete(void* p){
        cout<<"\ndelete overloaded";
        free(p);
    }
    //void operator=(void *p){
        
    //}
    void print(){
        cout<<num;
    }
};
int main(){
    number *num = new number();
    cout<<"Value stored:\t";
    num->print();
    delete num;
}