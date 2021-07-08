#include<iostream>
int main()
{
    system("g++ \"C:/VISUAL STUDIO/CPPfiles/runfiles/run.cpp\" -o run1");
    system("run1.exe");
    int b=remove("run1.exe");
}