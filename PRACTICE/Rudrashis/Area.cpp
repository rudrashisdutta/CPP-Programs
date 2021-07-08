#include<iostream>
using namespace std;
double area(double h,double b){
    double area=0.5*h*b;
    return area;
}
float area(float l,float b){
    float area=l*b;
    return area;
}
float area(float r){
    float area=4.0*3.14*r*r;
    return area;
}
int main(){
    float l,b;
    double h,ba;
    float r;
    cout<<"Enter the length and breadth of the rectangle:\n";
    cin>>l>>b;
    cout<<"Enter the height and base of the triangle:\n";
    cin>>h>>ba;
    cout<<"Enter the radius of the circle:\n";
    cin>>r;
    cout<<"Area of the rectangle:\t"<<area(l,b)<<"\nSurface area of the sphere:\t"<<area(r)<<"\nArea of a triangle:\t"<<area(h,ba);
}