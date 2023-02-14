#include<iostream>
#include <string>
#include <string>
using namespace std;
class student{
    private:
    int rollNumber;
    double totalMarks;
    string name;
    static void printAverage(){
        cout<<"Average marks of "<<n<<" students = "<<avg;
    }
    public:
    static double avg;
    static int n;
    static void calculateAverage(student a[500]){
        double sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i].totalMarks;
        }
        avg=sum/n;
        printAverage();
    }
    void setData(int roll,double totalM,string Name){
        name=Name;
        rollNumber=roll;
        totalMarks=totalM;
    }
}stud[500];
int student::n=0;
double student::avg=0.0;
int main(){
    cout<<"Enter the number of students:\t";
    cin>>student::n;
    for(int i=0;i<student::n;i++){
        int rollNumber;
        double totalMarks;
        string name;
        cin.ignore(1,'\n');
        cout<<"Student "<<i+1<<":\n";
        cout<<"Name:\t";
        getline(cin,name);
        cout<<"Roll Number:\t";
        cin>>rollNumber;
        cout<<"Total Marks:\t";
        cin>>totalMarks;
        stud[i].setData(rollNumber,totalMarks,name);
    }
    student::calculateAverage(stud);
}