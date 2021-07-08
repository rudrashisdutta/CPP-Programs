#include<iostream>
#include<string>
using namespace std;
class str{
    private:
    string x;
    int len;
    public:
    str(string d){
        x=d;
        len=x.length();
    }
    void con(str s){
        string sum;
        sum=x+s.x;
        cout<<"Concatenated string=\t"<<sum;
    }
};
int main(){
    string x1,x2;
    cout<<"Enter the first string:\t";
    getline(cin,x1);
    cout<<"Enter the second string:\t";
    getline(cin,x2);
    str s1(x1);
    str s2(x2);
    s1.con(s2);
}