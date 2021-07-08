#include<iostream>
using namespace std;
class TIME{
		int hr,min,sec;
	public:
		void getData(){
				cout<<"Hours:  ";
				cin>>hr;
				cout<<"Minutes:  ";
				cin>>min;
				cout<<"Seconds:  ";
				cin>>sec;
		}
		void add(TIME t1,TIME t2){
				sec=3600*(t1.hr+t2.hr)+60*(t1.min+t2.min)+t1.sec+t2.sec;
				hr=sec/3600;
				min=(sec%3600)/60;
				sec=(sec%3600)%60;
		}
		void display(){
				cout<<"\nSum of 2 times = "<<hr<<" hours, "<<min<<" minutes and "<<sec<<" seconds.\n";
		}
}t1,t2,t3;
int main(){
		cout<<"Enter the time 1 in hours, minutes, seconds--\n";
		t1.getData();
		cout<<"\nEnter the time 2 in hours, minutes, seconds--\n";
		t2.getData();
		t3.add(t1,t2);
		t3.display();
}
