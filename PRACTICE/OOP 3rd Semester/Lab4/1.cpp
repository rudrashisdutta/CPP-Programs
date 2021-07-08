#include<iostream>
using namespace std;
class Reactangle{
    int length,breadth;
    public:
    Reactangle(){
        cout<<"Length: \t";
        cin>>length;
        cout<<"Breadth:\t";
        cin>>breadth;
    }
    void calculateArea(){
        cout<<"Area:\t"<<length*breadth;
    }
    friend void calculateAreaFriend(Reactangle rect);
};
void calculateAreaFriend(Reactangle rect){
    cout<<"Area using friend function:\t"<<rect.length*rect.breadth;
}
int main(){
    cout<<"Enter the rectangle:\n";
    Reactangle rect;
    rect.calculateArea();
    cout<<"\n";
    calculateAreaFriend(rect);
}