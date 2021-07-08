//WRONG CODE
#include<iostream>
using namespace std;
class Time{
    string time;
    public:
    Time(int sh,int sm=0){
        time=sh+":"+sm;
        cout<<time;
    }
    void printTime(){
        int i=0;
        cout<<"Hour:\t";
        while(time[i]!=':'){
            cout<<time[i];
            i++;
        }
        i++;
        cout<<"\nMinutes:\t";
        while(i<time.length()){
            cout<<time[i];
        }
    }
    ~Time(){
        
    }
};
int main(){
    Time t1(2,23);
    Time t2(10);
    cout<<"Time1:\n\n";
    //t1.printTime();
    cout<<"Time2:\n\n";
    //t2.printTime();
}