#include<iostream>
#include<windows.h>
int main()
{
    using namespace std;
    int f,d,g,h;
    cin>>f>>d>>g>>h;
    for(int i=0;i<20;i++)
    {
        Beep(4000,100);
        Beep(4000,100);
        Beep(4000,100);
        Beep(4000,400);
        Beep(0,0);
    }
}