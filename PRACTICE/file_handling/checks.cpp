#include<iostream>
#include<fstream> 
using namespace std;
int main()
{
    long long int x;
    uppar:
    ofstream check("checks.txt",ios::out);
    cout<<"Enter the val of x:: ";
    cin>>x;
    check<<x;
    check.close();
    long long int y;
    ifstream checky("checks.txt",ios::in);
    checky>>y;
    cout<<":: "<<y;
    checky.close();
    int z;
    cin>>z;
    if(z==1)
    goto uppar;
}