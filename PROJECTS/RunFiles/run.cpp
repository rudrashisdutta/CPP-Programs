#include<iostream>
#include<string>
using namespace std;
int main()
{
    string file,command="",runc="";
    getline(cin,file);
    runagain:
    command="g++ "+file+".cpp -o"+file;
    if(system(command.c_str())==0)
    {
        runc=file+".exe";
        system(runc.c_str());
        string x;
        system("pause");
        system("cls");
        cin>>x;
        if(x=="0")
        int b=remove(runc.c_str());
        else if(x=="run")
        goto runagain;
        system("cls");
    }
    else
    {
        system("pause");
        goto runagain;
    }
}

/*
PROJECT::> MAKE A VIRTUAL PLATFORM FOR RUNNING ANY C++ PROGRAM <::PROJECT
*/