#include<iostream>
using namespace std;
int main(){
    int j=1;
    try{
        if(j==1){
            throw "ERROR";
        }
    }catch(string s){
        cout<<s;
    }
}