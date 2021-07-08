#include<iostream>
using namespace std;
double areaVol(float radius){
    return 3.14*radius*radius;
}
double areaVol(double radius){
    return (4/3) * 3.14 *radius*radius*radius;
}
int main(){
    float radius = 5;
    cout<<"Area of the circle = "<<areaVol(radius)<<".\nVolume of the sphere = "<<areaVol((double) radius)<<".";
}