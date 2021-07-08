#include<iostream>
using namespace std;
class Time{
    int h,m,s;
    void optimize(){
        m+=s/60;
        h+=(m/60);
        m%=60;
        s%=60;
    }
    public:
    Time(){
        cout<<"Hours:\t";
        cin>>h;
        cout<<"Minutes:\t";
        cin>>m;
        cout<<"Seconds:\t";
        cin>>s;
        optimize();
    }
    Time(Time a,Time b){
        h=a.h+b.h;
        m=a.m+b.m;
        s=a.s+b.s;
        optimize();
    }
    string printTime(){
        cout<<h<<":"<<m<<":"<<s;
        return "";
    }
};
int main(){
    cout<<"Enter values for time 1:\n\n";
    Time t1;
    cout<<"\n\nEnter values for the time 2:\n\n";
    Time t2;
    Time sum(t1,t2);
    cout<<"\n\n"<<t1.printTime()<<" + "<<t2.printTime()<<" = "<<sum.printTime();
}