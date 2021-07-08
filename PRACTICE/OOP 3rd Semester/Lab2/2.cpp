#include<iostream>
using namespace std;
int var = 5;
int main(){
    int var = 10;
    cout<<"Global value is "<<::var<<".\nLocal value is "<<var<<".";
}