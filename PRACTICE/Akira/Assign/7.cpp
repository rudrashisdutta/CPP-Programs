#include<iostream>
using namespace std; 
class test{
	int objNo;
	static int objCnt;
public:
	test(){
		cout<<"\nCreating ";
	    objNo = ++objCnt;
		printObjNumber();
	}
	~test(){
	    --objCnt;
		cout<<"\nDestroying ";
		printObjNumber();
		printObjCount();
	}
	void printObjNumber(){
		cout << "object number :" << objNo << "\n";
	}
	static void printObjCount(){
		cout << "active objects:" << objCnt<< "\n";
	}
};
int test::objCnt;
int main(){
	test t1, t2;
	cout<<"\n";
	test::printObjCount();
	test t3;
	cout<<"\n";
	test::printObjCount();
	cout<<"\n\nCurrently active objects:\n";
	t1.printObjNumber();
	t2.printObjNumber();
	t3.printObjNumber();
	return 0;
}