#include<iostream>
using namespace std;
void fun_area(){
    cout<<"\nYou must give an argument in the function to get a value.";
}
void fun_area(double radius){
    cout<<"\nArea of the circle:\t"<<3.14*radius*radius;
}
void fun_area(double l,double b){
    cout<<"\nArea of a rectangle:\t"<<l*b;
}
void fun_area(double l,double b,double h){
    cout<<"\nVolume of a cuboid:\t"<<l*b*h;
}
int main(){
    fun_area();
    fun_area(10.9);
    fun_area(2.0,7.2);
    fun_area(3.0,5.0,2.3);
}