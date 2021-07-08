#include<iostream>
using namespace std;
class Student{
    protected:
    string name,roll;
    public:
    void enterData(){
        cout<<"Name:\t";
        getline(cin,name);
        cout<<"Roll number:\t";
        getline(cin,roll);
    }
    void printStudentInfo(){
        cout<<"\nName:\t"<<name<<"\nRoll Number:\t"<<roll;
    }
};
class Sports:virtual public Student{
    protected:
    int s_grade;
    void printS(){
        cout<<"\nSports Grade:\t"<<s_grade;
    }
};
class Exam:virtual public Student{
    protected:
    int e_grade;
    void printE(){
        cout<<"\nExam Grade:\t"<<e_grade;
    }
};
class Result:public Sports,public Exam{
    protected:
    string finalResult;
    public:
    Result(){
        enterData();
        cout<<"Sports Grade:\t";
        cin>>s_grade;
        cout<<"Exam Grade:\t";
        cin>>e_grade;
        if(((e_grade+s_grade)/2)>70)
        finalResult = "EXCELLENT";
        else if(((e_grade+s_grade)/2)<=70&&((e_grade+s_grade)/2)>=40)
        finalResult = "GOOD";
        else finalResult = "FAIL";
    }
    void printRes(){
        Sports::printStudentInfo();
        printS();printE();
        cout<<"\nFinal Result:\t"<<finalResult;
    }
};
int main(){
    Result res;
    res.printRes();
}