#include<iostream>
#include<iomanip>
using namespace std;
const int numberOfItems = 10;
class items{
    string code,name;
    double price,priceTotal;
    int quantity;
    public:
    void itemsVal(){
        cout<<"CODE:\t";
        getline(cin,code);
        cout<<"NAME:\t";
        getline(cin,name);
        cout<<"PRICE:\t";
        cin>>price;
        cout<<"QUANTITY:\t";
        cin>>quantity;
        priceTotal = price*quantity;
    }
    void show(){
        cout<<setw(15)<<code<<setw(30)<<name<<setw(10)<<price<<setw(10)<<quantity<<setw(15)<<priceTotal;
    }
};
int main(){
    items item[numberOfItems];
    cout<<"Enter the data:\n";
    for(int i=0;i<numberOfItems;i++){
        cout<<"\n\nITEM "<<i+1<<":\n";
        item[i].itemsVal();
        cin.ignore(1,'\n');
    }
    cout<<setw(20)<<"Sr. Number"<<setw(15)<<"CODE"<<setw(30)<<"NAME"<<setw(10)<<"PRICE"<<setw(10)<<"QUANTITY"<<setw(15)<<"TOTAL PRICE";
    cout<<"\n----------------------------------------------------------------------------------------------------";
    for(int i=0;i<numberOfItems;i++){
        cout<<"\n\n"<<setw(20)<<i+1;
        item[i].show();
    }
    cout<<"\n----------------------------------------------------------------------------------------------------";
}