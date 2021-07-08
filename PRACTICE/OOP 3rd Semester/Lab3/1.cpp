#include<iostream>
using namespace std;
class Triangle{
    int base,height;
    public:
    void getData(int b,int h){
        base = b;
        height = h;
    }
    void areaTrin(){
        cout<<"Area:\t"<<0.5*(float)base*(float)height<<".";
    }
};
int main(){
    Triangle t;
    t.getData(10,20);
    t.areaTrin();
}