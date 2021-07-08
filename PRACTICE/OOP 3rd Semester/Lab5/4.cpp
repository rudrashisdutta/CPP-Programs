#include<iostream>
using namespace std;
class TIME{
    int hours,mins,seconds;
    void optimize(){
        mins+=(seconds/60);
        seconds%=60;
        hours+=(mins/60);
        mins%=60;
    }
    void add(TIME t1,TIME t2){
        hours = t1.hours + t2.hours;
        mins = t1.mins + t2.mins;
        seconds = t1.seconds + t2.seconds;
        optimize();
    }
    public:
    TIME(){
        cout<<"Hours:\t";
        cin>>hours;
        cout<<"Mins:\t";
        cin>>mins;
        cout<<"Seconds:\t";
        cin>>seconds;
        optimize();
    }
    TIME(TIME t1,TIME t2){
        add(t1,t2);
    }
    void printTime(){
        cout<<hours<<" hours "<<mins<<" minutes "<<seconds<<" seconds";
    }
};
int main(){
    TIME t1,t2,result(t1,t2);
    cout<<"The resultant of addition of the entered time:\t";result.printTime();
}