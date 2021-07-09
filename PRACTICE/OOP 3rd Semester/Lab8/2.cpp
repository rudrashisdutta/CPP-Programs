#include<iostream>
#include<string>
using namespace std;
class Item{
    string number,price;
    public:
    Item(){
        cout<<"Number:\t";
        getline(cin,number);
        cout<<"Price:\t";
        getline(cin,price);
    }
    Item(int n){}
    void print(){
        cout<<"Number:\t"<<number<<"\nPrice:\t"<<price;
    }
};
Item* enter(Item* p,int size){
    
}
int main(){
    Item *item;
    int n;
    cout<<"Enter the number of items:\t";
    cin>>n;
    cin.ignore(1,'\n');
}