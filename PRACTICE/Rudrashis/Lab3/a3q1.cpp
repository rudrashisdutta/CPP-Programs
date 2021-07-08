#include<iostream>
using namespace std;
class Triangle{
		float b,h;
	public:
		void getData(float base, float height){
				b=base;
				h=height;
		}
		void areaTrin(){
				float area=b*h*0.5;
				cout<<area;
		}
}t[10];
int main(){
		float b,h;
		for(int i=0;i<10;i++){
				cout<<"\n\nEnter the base and height of triangle "<<i+1<<"--\n";
				cin>>b>>h;
				t[i].getData(b,h);
				cout<<"Area of the triangle "<<i+1<<" = ";
				t[i].areaTrin();
		}
}
