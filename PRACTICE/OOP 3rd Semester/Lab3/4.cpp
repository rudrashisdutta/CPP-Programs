#include<iostream>
using namespace std;
class TIME{
    int hours,mins,secs;
    void refresh(){
        mins+=(secs/60);
        secs%=60;
        hours+=(mins/60);
        mins%=60;
    }
    public:
    TIME(){
        cout<<"Hours:\t";
        cin>>hours;
        cout<<"Minutes:\t";
        cin>>mins;
        cout<<"Seconds:\t";
        cin>>secs;
        refresh();
    }
    TIME(TIME time1,TIME time2){
        hours = time1.hours + time2.hours;
        mins = time1.mins + time2.mins;
        secs = time1.secs + time2.secs;
        refresh();
    }
    void showTime(){
        cout<<hours<<" hours "<<mins<<" minutes "<<secs<<" seconds.";
    }
};
int main(){
    cout<<"Enter the first time:\n";
    TIME num1;
    cout<<"Enter the second time:\n";
    TIME num2;
    cout<<"The resultant time is:\t";
    TIME add(num1,num2);
    add.showTime();
}