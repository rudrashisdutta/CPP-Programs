#include<iostream>
#include<Windows.h>

using namespace std;
int main()
{
    int x;
    cin>>x;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);
    {
        cout << "HELLO!!";
        Sleep(3000);
        cout<<"WORLD!!";
    }
}