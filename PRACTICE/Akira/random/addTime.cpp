#include<iostream>
using namespace std;
class time
{
    int hour,min,sec;
    public:
    void input(int a,int b,int c){
        hour=a;
        min=b;
        sec=c;
    }
    void show(){
        cout<<hour<<" hours "<<min<<" mins "<<sec<<" sec.";
    }
    void addTime(time x,time y){
        sec=(x.sec+y.sec)%60;
        min=(x.min+y.min+(x.sec+y.sec-sec)/60)%60;
        hour=x.hour+y.hour+(x.min+y.min+(x.sec+y.sec-sec)/60-min)/60;
    }
}t1,t2,t3;
