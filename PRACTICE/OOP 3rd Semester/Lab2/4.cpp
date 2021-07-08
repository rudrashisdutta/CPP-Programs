#include<iostream>
using namespace std;
void funArea(){
    cout<<"\nPlease provide an argument!\n";
}
void funArea(double radius){
    cout<<"\nArea of the circle = "<<3.14*radius*radius<<".\n";
}
void funArea(double len,double bre){
    cout<<"\nArea of the reatangle = "<<len*bre<<".\n";
}
void funArea(double len,double bre,double hei){
    cout<<"\nVolume of the cuboid = "<<len*bre*hei<<".";
}
int main(){
    double num1 = 5,num2 = 10,num3 = 8;
    funArea();
    funArea(num1);
    funArea(num1,num2);
    funArea(num1,num2,num3);
}