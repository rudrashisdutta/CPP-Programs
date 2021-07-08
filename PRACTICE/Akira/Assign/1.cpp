#include<iostream>
using namespace std;
class Employee{
    string name,dept;
    int empno;
    double sal;
    public:
    //initialize()
    void initialize(){
        cout<<"Enter the data:\n\nName:\t";
        getline(cin,name);
        cout<<"Department:\t";
        getline(cin,dept);
        cout<<"Employee Number:\t";
        cin>>empno;
        cout<<"Salary:\t";
        cin>>sal;
    }
    //Overloaded initialize()
    void initialize(string n,string d,double s,int e){
        name=n;
        dept=d;
        sal=s;
        empno=e;
    }
    //inline
    inline void printData(){
        cout<<"\n\nName:\t"<<name;
        cout<<"\nDepartment:\t"<<dept;
        cout<<"\nEmployee name:\t"<<empno;
        cout<<"\nSalary:\t"<<sal;
    }
};
int main(){
    Employee e1,e2;
    e1.initialize();
    string nam,dep;
    int empn;
    double sa;
    cout<<"Enter the data of second employee:\n\nName:\t";
    cin.ignore(1,'\n');
    getline(cin,nam);
    cout<<"\nDepartment:\t";
    getline(cin,dep);
    cout<<"\nEmployee number:\t";
    cin>>empn;
    cout<<"Salary:\t";
    cin>>sa;
    e2.initialize(nam,dep,sa,empn);
    cout<<"Employee 1:";
    e1.printData();
    cout<<"\n\nEmployee 2:";
    e2.printData();
}