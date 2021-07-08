#include<iostream>
using namespace std;
class Rectange{
    double length,breadth;
    public:
    void setData(double l,double b){
        length=l;
        breadth=b;
    }
    double calculateArea(){
        return length*breadth;
    }
    friend double friendFuncCalcArea(Rectange R);
}X;
double friendFuncCalcArea(Rectange R){
    return R.length*R.breadth;
}
int main(){
    X.setData(20,10);
    cout<<"Area by member function:\t"<<X.calculateArea();
    Rectange D;
    D.setData(40,3);
    cout<<"\nArea by frined function:\t"<<friendFuncCalcArea(D);
}