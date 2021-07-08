#include<iostream>
using namespace std;
class string{
    std::string value;
    public:
    string(){
        cout<<"Enter the string:\t";
        getline(cin,value);
    }
    string(int n){}
    bool operator==(string newSTring){
        if(value == newSTring.value){
            return true;
        }
        else
        return false;
    }
    string operator+(string newString){
        string n(1);
        n.value = value + newString.value;
        return n;
    }
    void operator=(string newString){
        value = newString.value;
    }
    void operator^(string val){
        cout<<value;
    }
};
int main(){
    class::string val1,val2,res(1);
    res = val1 + val2;
    cout<<"Result of addition:\t";
    res^res;
    if(val1 == val2){
        cout<<"\n\nEQUAL!";
    }
    else{
        cout<<"\n\nNOT EQUAL!";
    }
}