#include<iostream>
#include<direct.h>
#include<fstream>
#include<windows.h>
using namespace std;
int main()
{
    /*string path="C:/PHONEBOOK/hello/",path1="C:/PHONEBOOK/hello/hello.txt";
    int b=_rmdir(path.c_str());
    Sleep(5000);
    int ba=_mkdir(path.c_str());
    Sleep(5000);
    ofstream open(path1,ios::app);
    open.close();*/
    system("dir");
    system("g++ \"C:/VISUAL STUDIO/CPPfiles/projects/Phonebook.cpp\" -o phonebook.exe");
    system("phonebook.exe");
    int b=remove("C:/VISUAL STUDIO/CPPfiles/phonebook.exe");
}