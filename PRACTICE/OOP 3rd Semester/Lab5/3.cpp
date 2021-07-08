#include<iostream>
using namespace std;
class DISTANCE{
    int feet,inches;
    void optimize(){
        feet+=(inches/12);
        inches%=12;
    }
    public:
    DISTANCE(){
        cout<<"FEET:\t";
        cin>>feet;
        cout<<"INCHES:\t";
        cin>>inches;
        optimize();
    }
    DISTANCE(DISTANCE d1,DISTANCE d2){
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        optimize();
    }
    void printDistance(){
        cout<<feet<<" feet "<<inches<<" inches";
    }
};
int main(){
    DISTANCE d1,d2,result(d1,d2);
    cout<<"Resultant of sum:\t";result.printDistance();
}