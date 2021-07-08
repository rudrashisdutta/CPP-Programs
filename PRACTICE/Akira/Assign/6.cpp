#include<iostream>
using namespace std;
class Employee{
    string name,empl_id,designation,address;
    double salary,balance;
    int age;
    public:
    Employee(){
        assign();
    }
    void assign(){
        cout<<"Age:\t";
        cin>>age;
        cin.ignore(1,'\n');
        cout<<"Name:\t";
        getline(cin,name);
        cout<<"Employee id:\t";
        getline(cin,empl_id);
        cout<<"Designation:\t";
        getline(cin,designation);
        cout<<"Address:\t";
        getline(cin,address);
        cout<<"Salary:\t";
        cin>>salary;
        balance=0;
    }
    double getSalary(){
        return salary;
    }
    int deposit(double ammount){
        balance+=ammount;
        return 1;
    }
    int withdraw(double ammount){
        if(ammount<=balance){
            cout<<"Enter the employee id to Withdraw money:\t";
            string empid;
            getline(cin,empid);
            if(empid==empl_id){
                balance-=ammount;
                return 1;
            }
            else{
                cout<<"Wrong id!\n\n";
                return 2;
            }
        }
        else
        return 0;
    }
    string getBalance(){
        cout<<"Enter the employee id to check Balance:\t";
        string empid;
        getline(cin,empid);
        if(empid==empl_id){
            cout<<balance;
        }
        return "";
    }
    void display(){
        cout<<"Name:\t"<<name<<"\nAge:\t"<<age<<"\nDesignation:\t"<<designation<<"\nAddress:\t"<<address<<"\n\n";
    }
};
int main(){
    cout<<"Enter the information of the employee:\n\n";
    Employee emp;
    string exit="";
    cin.ignore(1,'\n');
    while(exit!="EXIT"){
        cout<<"Press:\n1:Show Employee info\n2:Deposit Salary\n3:Deposit Money\n4:Withdraw money\n5:Show Balance\n6:Exit\n\nYour Choice:\t";
        string choice;
        getline(cin,choice);
        if(choice=="1"){
            cout<<"\n\n";
            emp.display();
            system("pause");
        }
        else if(choice=="2"){
            if(emp.deposit(emp.getSalary())==1){
                cout<<"Salary Deposited successfully!\n\n";
            }
            system("pause");
        }
        else if(choice=="3"){
            double amm;
            cout<<"\n\nEnter the ammount:\t";
            cin>>amm;
            if(emp.deposit(amm)==1){
                cout<<"\n\n"<<amm<<" amount deposited successfully!\n\n";
            }
            system("pause");
        }
        else if(choice=="4"){
            cout<<"Enter the ammount you wish to withdraw:\t";
            double amm;
            cin>>amm;
            cin.ignore(1,'\n');
            int x=emp.withdraw(amm);
            if(x==1){
                cout<<"\n\n"<<amm<<" ammount withdrawn successfull!\n\n";
            }
            else if(x==0){
                cout<<"\n\nInsufficient balance!\n\n";
            }
            system("pause");
        }
        else if(choice=="5"){
            emp.getBalance();
        }
        else if(choice=="6"){
            exit="EXIT";
        }
        else{
            exit="";
        }
    }
}