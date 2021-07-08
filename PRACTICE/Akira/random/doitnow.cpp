#include<iostream>
using namespace std;
class Test;
class Student{
    protected:
    string name,course,roll;
    int age;
    public:
    Student(){
        cout<<"Name:\t";
        getline(cin,name);
        cout<<"Age:\t";
        cin>>age;
        cin.ignore(1,'\n');
        cout<<"Roll:\t";
        getline(cin,roll);
        cout<<"Course:\t";
        getline(cin,course);
    }
    friend void print(Student s,Test t);
};
class Test{
    int marks[5];
    public:
    Test(){
        cout<<"Enter the marks in 5 subjects:\n";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    friend void print(Student s,Test t);
};
void print(Student s,Test t){
    cout<<"\nStudent's Data:\n\nName:\t"<<s.name<<"\nRoll:\t"<<s.roll<<"\nAge:\t"<<s.age<<"\nCourse:\t"<<s.course;
    for(int i=0;i<5;i++){
        cout<<"\nMark in Sub "<<i+1<<" = "<<t.marks[i];
    }
}
int main(){
    Student s;
    Test t;
    print(s,t);
}