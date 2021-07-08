#include<iostream>
using namespace std;
class Circle{
    protected:
    int radius;
    public:
    Circle(){
        cout<<"\nradius:\t";
        cin>>radius;
    }
    void showArea(){
        cout<<"Area of the circle:\t"<<3.14*(double)radius*(double)radius;
    }
};
class Rectangle:public Circle{
    protected:
    int breadth,length;
    public:
    Rectangle(){
        length = radius;
        cout<<"\nReusing radius as length = "<<length;
        cout<<"\nBreadth:\t";
        cin>>breadth;
    }
    void showRectArea(){
        cout<<"\nArea of the rectangle:\t"<<length*breadth;
    }
};
class Cylinder:public Circle{
    protected:
    int radi,height;
    public:
    Cylinder(){
        radi = radius;
        cout<<"\nReusing radius:\t"<<radi;
        cout<<"\nHeight:\t";
        cin>>height;
    }
    void showVolume(){
        cout<<"\nVolume:\t"<<3.14*(double)radi*(double)radi*(double)height;
    }
};
int main(){
    Rectangle rect;
    rect.showArea();
    rect.showRectArea();
    Cylinder cy;
    cy.showArea();
    cy.showVolume();
}