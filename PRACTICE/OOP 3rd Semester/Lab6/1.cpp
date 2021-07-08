#include<iostream>
using namespace std;
class Circle{
    void showArea(){
        cout<<"Area of the circle:\t"<<3.14*(double)radius*(double)radius;
    }
    protected:
    int radius;
    public:
    Circle(){
        cout<<"radius:\t";
        cin>>radius;
        showArea();
    }
};
class Rectangle:protected Circle{
    void showArea(){
        cout<<"\nArea of the rectangle:\t"<<length*breadth;
    }
    protected:
    int breadth,length;
    public:
    Rectangle(){
        length = radius;
        cout<<"\nReusing radius as length = "<<length;
        cout<<"\nBreadth:\t";
        cin>>breadth;
        showArea();
    }
};
int main(){
    Rectangle rect;
}