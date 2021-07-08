#include<iostream>
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
    void print(){
        cout<<"Number:\t"<<number<<"\nPrice:\t"<<price;
    }
};
int main(){
    Item item;
    Item *itemP;
    itemP = &item;
    cout<<"By using a normal object:\n";
    item.print();
    cout<<"\nBy using a pointer to the class:\n";
    itemP->print();
}