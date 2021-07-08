#include<iostream>
#include<math.h>
using namespace std;
class coordinate{
    double x,y;
    public:
    void enterCoordinate(){
        cout<<"X:\t";
        cin>>x;
        cout<<"Y:\t";
        cin>>y;
    }
    void distance(coordinate point2){
        double Distance;
        Distance=sqrt(pow((point2.x-x),2)+pow((point2.y-y),2));
        if(Distance==0.0)
            cout<<"The points entered by the user, were the same.\nSo, distance = 0 units";
        else
            cout<<"The distance between ("<<point2.x<<","<<point2.y<<") and ("<<x<<","<<y<<") = "<<Distance<<" units";
    }
}C1,C2;
int main(){
    cout<<"Enter the coordinates of point 1:\n";
    C1.enterCoordinate();
    cout<<"Enter the coordinates of point 2:\n";
    C2.enterCoordinate();
    C1.distance(C2);
}