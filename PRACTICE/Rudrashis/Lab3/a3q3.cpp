#include<iostream>
using namespace std;
class complex{
		float re,im;
	public:
		void getData(){
				cout<<"Real Part:  ";
				cin>>re;
				cout<<"Imaginary Part:  ";
				cin>>im;
		}
		void add(complex c1,complex c2){
				re=c1.re+c2.re;
				im=c1.im+c2.im;
		}
		void display(){
				cout<<"Sum of the 2 complex numbers = "<<re<<" + "<<im<<"i";
		}
}c1,c2,c3;
int main(){
		cout<<"Enter the real and imaginary parts of first complex number--\n";
		c1.getData();
		cout<<"Enter the real and imaginary parts of second complex number--\n";
		c2.getData();
		c3.add(c1,c2);
		c3.display();
}
