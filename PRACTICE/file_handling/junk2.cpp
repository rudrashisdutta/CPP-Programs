#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int x;string path="C:/ED/Fl.txt";
    ofstream d(path,ios::app);
    d.close();
    cin.ignore(2,'\n');
    x=remove(path.c_str());
}