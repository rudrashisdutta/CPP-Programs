#include<iostream>
using namespace std;
class Student{
    string name,course,roll;
    int age;
    public:
    Student(){
        cout<<"Age:\t";
        cin>>age;
        cin.ignore(1,'\n');
        cout<<"Name:\t";
        getline(cin,name);
        cout<<"Roll:\t";
        getline(cin,roll);
        cout<<"Course:\t";
        getline(cin,course);
    }
    void printData(){
        cout<<"\nStudent's Data:\n\nName:\t"<<name<<"\nRoll:\t"<<roll<<"\nAge:\t"<<age<<"\nCourse:\t"<<course;
    }
};
class Test:public Student{
    int marks[5];
    public:
    Test(){
        cout<<"Enter the marks in 5 subjects:\n";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
        printData();
    }
    void printData(){
        Student::printData();
        for(int i=0;i<5;i++){
            cout<<"\nMark in Sub "<<i+1<<" = "<<marks[i];
        }
    }
};
int main(){
    Test t;
}