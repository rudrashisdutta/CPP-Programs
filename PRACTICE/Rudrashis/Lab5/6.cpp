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
    str(str s,str t){
        x=s.x+t.x;
    }
    string getStr(){
        return x;
    }
};
int main(){
    string x1,x2;
    cout<<"Enter the first string: \t";
    getline(cin,x1);
    cout<<"Enter the second string:\t";
    getline(cin,x2);
    str s1(x1);
    str s2(x2);
    str con(s1,s2);
    cout<<s1.getStr()<<" + "<<s2.getStr()<<" = "<<con.getStr();
}