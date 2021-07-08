#include<iostream>
#include<math.h>
using namespace std;
double AREA_VOL(double radius){
    return 3.14*radius*radius;
}
double AREA_VOL(float radius){
    return (4.0/3.0)*3.14*pow(radius,3);
}
int main(){
    double radiusc;
    float radiuss;
    cout<<"PRESS:\n1:Area of circle\n2:Volume of sphere\nYOUR CHOICE:";
    int n;
    cin>>n;
    if(n==1){
        cout<<"Enter the radius of circle:\t";
        cin>>radiusc;
        double area=AREA_VOL(radiusc);
        cout<<"Area of the circle:\t"<<area;
    }
    else if(n==2){
        cout<<"Enter the radius of the sphere:\t";
        cin>>radiuss;
        double vol=AREA_VOL(radiuss);
        cout<<"Volume of the sphere:\t"<<vol;
    }
    else{
        cout<<"Wrong choice!";
    }
}