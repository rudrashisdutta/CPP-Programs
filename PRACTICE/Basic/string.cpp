#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int i=0;
    stringstream ss;
    ss<<i;
    string x="1",s,p;
    s="r\n"+x+"\nq";
    ss>>p;
    s+=p;
    cout<<s;
}