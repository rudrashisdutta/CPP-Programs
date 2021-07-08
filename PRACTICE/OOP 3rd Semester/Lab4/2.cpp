#include<iostream>
using namespace std;
class calc{
    int length,breadth;
    public:
    calc(){
        cout<<"Length: \t";
        cin>>length;
        cout<<"Breadth:\t";
        cin>>breadth;
    }
    friend void area(calc rect);
};
void area(calc rect){
    if(rect.length==rect.breadth){
        cout<<"Area of the square:\t";
    }
    else{
        cout<<"Area of the rectangle:\t";
    }
    cout<<rect.length*rect.breadth;
}
int main(){
    cout<<"Enter the details:\n";
    calc pol;
    area(pol);
}