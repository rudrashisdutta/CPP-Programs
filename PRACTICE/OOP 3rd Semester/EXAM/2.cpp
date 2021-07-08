#include<iostream>
#include<math.h>
using namespace std;
class coordinates{
    int x,y,z;
    public:
    coordinates(){
        cout<<"X:\t";
        cin>>x;
        cout<<"Y:\t";
        cin>>y;
        cout<<"Z:\t";
        cin>>z;
    }
    void print(){
        cout<<"\nX:\t"<<x<<"\nY:\t"<<y<<"\nZ:\t"<<z;
    }
    friend double operator-(coordinates n1,coordinates n2);
    friend void operator++(coordinates &ob);
    friend void operator++(coordinates &ob, int x);
    ~coordinates(){
        cout<<"\nDestructor working!\n";
    }
};
double operator-(coordinates n1,coordinates n2){
    return sqrt((double)((n1.x-n2.x)*(n1.x-n2.x)+(n1.y-n2.y)*(n1.y-n2.y)+(n1.z-n2.z)*(n1.z-n2.z)));
}
void operator++(coordinates &ob){
    ob.x++;
    ob.y++;
    ob.z++;
    cout<<"\nPost Incremnt Operator Overloaded\n";
}
void operator++(coordinates &ob, int x)
{
    ++ob.x;
    ++ob.y;
    ++ob.z;
    cout<<"\nPre Increment Operator Overloaded\n";
}
int main(){
    cout<<"Enter the first coordinate:\n";
    coordinates c1;
    cout<<"\nEnter the second coordinate:\n";
    coordinates c2;
    double dist;
    dist = c2 - c1;
    cout<<"Distance:\t"<<dist;
    c1++;
    ++c2;
}