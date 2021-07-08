#include<iostream>
using namespace std;
/*class player{
    string name,number,score;
    public:
    friend ostream& operator<<(ostream &,const player&);
    friend istream& operator>>(istream &,player&);
};
ostream& operator<<(ostream &out,const player &pl){
    cout<<"\nNAME:\t"<<pl.name<<"\nNUMBER:\t"<<pl.number<<"\nSCORE:\t"<<pl.score;
    return out;
}
istream& operator>>(istream &in,player &pl){
    cout<<"NAME:\t";
    getline(in,pl.name);
    cout<<"NUMBER:\t";
    getline(in,pl.number);
    cout<<"SCORE:\t";
    getline(in,pl.score);
    return in;
}*/
class String{
    string str;
    public:
    void operator=(string str2){
        str = str2;
    }
    friend string operator+(String str1,String str2);
    friend ostream& operator<<(ostream &,const String&);
};
ostream& operator<<(ostream &out,const String &str){
    out<<str.str;
    return out;
}
string operator+(String str1,String str2){
    return str1.str+str2.str;
}
int main(){
    //player p1;
    //cin>>p1;
    //cout<<p1;
    String str1,str2;
    str1 = "KIIT";
    cout<<str1<<'\n';
    str2 = "University";
    cout<<str2<<'\n';
    String str3;
    str3 = str1+str2;
    cout<<str3;
}