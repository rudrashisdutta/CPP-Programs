#include<iostream>
using namespace std;
struct NODE{
    string name;
    int roll,marks;
    NODE *next;
};
typedef NODE *node;


class stack{
    node head = NULL;
    node createNode(){
        node temp = new NODE;
        temp->marks = 0;
        temp->roll = 0;
        temp->name = "";
        temp->next = NULL;
        return temp;
    }
    void showNode(node head){
        if(head == NULL){
            cout<<"STACK EMPTY!";
        }else{
            node p = head;
            while(p!=NULL){
                cout<<"\n\nName:\t"<<p->name<<"\nRoll:\t"<<p->roll<<"\nMarks:\t"<<p->marks;
                p = p->next;
            }
        }
    }
    node push(node head,int roll,int marks,string name){
        node temp = createNode();
        temp->marks = marks;
        temp->roll = roll;
        temp->name = name;
        if(head == NULL){
            head = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        return head;
    }
    node pop(node head){
        if(head == NULL){
            cout<<"STACK EMPTY!";
        }
        else{
            node temp = head;
            head = head->next;
            temp->next = NULL;
            cout<<"The deleted node is:";
            showNode(temp);
            free(temp);
        }
        return head;
    }
    public:
    void options(){
        string choice="";
        while(choice!="5"){
            cout<<"\n\nPRESS:\n1- To Push\n2- To Pop\n3- To Display The Stack\n5- To Exit\nYOUR CHOICE:\t";
            getline(cin,choice);
            if(choice == "1"){
                string name;int roll;int marks;
                cout<<"\n\nName:\t";
                getline(cin,name);
                cout<<"\nRoll:\t";
                cin>>roll;
                cout<<"\nMarks:\t";
                cin>>marks;
                head = push(head,roll,marks,name);
                cin.ignore(1,'\n');
            }else if(choice == "2"){
                head = pop(head);
            }else if(choice == "3"){
                showNode(head);
            }
        }
    }
};
int main(){
    stack stack1;
    stack1.options();
}