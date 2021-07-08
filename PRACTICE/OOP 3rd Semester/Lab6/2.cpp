#include<iostream>
using namespace std;
class Circle{
    protected:
    int radius;
    public:
    Circle(){
        cout<<"radius:\t";
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
class Box:public Rectangle{
    protected:
    int len,brea,hei;
    public:
    Box(){
        len = length;
        brea = breadth;
        cout<<"\nReusing length and breadth :\t"<<len<<" and "<<brea<<" respectively.";
        cout<<"\nHeight:\t";
        cin>>hei;
    }
    void showVolume(){
        cout<<"\nVolume:\t"<<len*brea*hei;
    }
};
int main(){
    Box box;
    box.showArea();
    box.showRectArea();
    box.showVolume();
}