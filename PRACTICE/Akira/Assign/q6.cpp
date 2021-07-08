#include<iostream>
using namespace std;
class date{
    int m,y,d;
    public:
    void getDate(){
        cout<<"Year:\t";
        cin>>y;
        cout<<"Month:\t";
        cin>>m;
        cout<<"Date:\t";
        cin>>d;
    }
    int difference(date d){
        return y-d.y;
    }
};
class Emp{
    string name,empl_id,designation,address;
    double salary;
    date dob;
    int age;
    public:
    Emp(){
        assign();
        display();
    }
    void assign(){
        cout<<"Name:\t";
        getline(cin,name);
        date cd;
        cout<<"\n\nCurrent Date:\n\n";
        cd.getDate();
        cout<<"\n\nBirth Date:\n\n";
        dob.getDate();
        age=cd.difference(dob);
        cin.ignore(1,'\n');
        cout<<"Employee id:\t";
        getline(cin,empl_id);
        cout<<"Designation:\t";
        getline(cin,designation);
        cout<<"Address:\t";
        getline(cin,address);
        cout<<"Salary:\t";
        cin>>salary;
    }
    void display(){
        cout<<"\n\nDetails:\n\nName:\t"<<name<<"\nAge:\t"<<age<<"\nDesignation:\t"<<designation;
    }
};
int main(){
    Emp e;
}