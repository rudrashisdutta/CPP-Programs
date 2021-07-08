#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="1",q="4";
    if(s>q)
    cout<<"HII";
    else if(s<q)
    {
        cout<<"HELLO";
        s="0";
    }
    cout<<'\n'<<s;
}