#include<iostream>
using namespace std;
class Distance{
    int feet,inches;
    void optimizeVal(){
        feet+=(inches/12);
        inches%=12;
    }
    public:
    Distance(){
        cout<<"Feet:\t";
        cin>>feet;
        cout<<"Inches:\t";
        cin>>inches;
        optimizeVal();
    }
    Distance(Distance a,Distance b){
        feet=a.feet+b.feet;
        inches=a.inches+b.inches;
        optimizeVal();
    }
    string printDist(){
        cout<<feet<<" feet "<<inches<<" inches";
        return "";
    }
};
int main(){
    Distance d1;
    Distance d2;
    Distance sum(d1,d2);
    cout<<d1.printDist()<<" + "<<d2.printDist()<<" = "<<sum.printDist();
}