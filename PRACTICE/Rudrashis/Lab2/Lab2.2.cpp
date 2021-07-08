#include<iostream>
int x=5;
using namespace std;
int main(){
    int x=10;
    cout<<"Global:\t"<<::x<<"\nLocal:\t"<<x;
}