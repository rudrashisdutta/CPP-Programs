//in searchn q=0 is for normal searching and q=1 is for any other kind of search.//
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<stdlib.h>
#include<sstream>
using namespace std;
void correction()
{
    ifstream correct;
    correct.open("test.csv");
    string corrected="",junk="";
    getline(correct,junk,'\n');
    corrected=corrected+junk;
    while(!correct.eof())
    {
        getline(correct,junk,'\n');
        if(junk!="")
        corrected=corrected+'\n'+junk;
    }
    correct.close();
    ofstream crcting;
    crcting.open("test.csv");
    crcting<<corrected;
    crcting.close();
}
void storeroll()
{
    ifstream readroll;
    readroll.open("test.csv");
    ofstream writeroll;
    writeroll.open("ctroll.csv");
    while(!readroll.eof())
    {
        string i,name,roll,junk;
        getline(readroll,i,',');
        getline(readroll,name,',');
        getline(readroll,roll,',');
        getline(readroll,junk,'\n');
        writeroll<<name<<','<<roll<<';';
    }
    readroll.close();
    writeroll.close();
}
int checkuniqueroll(string eroll,string &pname)
{
    int flag=1;
    ifstream check;
    check.open("ctroll.csv");
    while(!check.eof())
    {
        string name,roll;
        getline(check,name,',');
        getline(check,roll,';');
        if(roll==eroll)
        {
            flag=0;
            pname=name;
            break;
        }
        else
        {
            flag=1;
            pname="";
        }
    }
    check.close();
    return flag;
}
string inttostr(int x)
{
    stringstream ss;
    string s;
    ss<<x;
    ss>>s;
    return s;
}
int strtoint(string a)
{
    int x=0;
    stringstream as(a);
    as>>x;
    return x;
}
string stoupper(string s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]-=32;
        }
        i++;
    }
    return s;
}
void searchn(int &h,string sname,int q)
{
    int f=0;
    string junk;
    s:
    cin.ignore(1,'\n');
    if(sname=="NULL")
    {
        cout<<"Enter the name to be searched:\t";
        if(q==0)
        cout<<"\nor type \"exit\" to exit search\n\nYOUR CHOICE:\t";
        getline(cin,sname);
    }
    sname=stoupper(sname);
    int x,y;
    x=sname.size();
    if(sname!="EXIT")
    {   
        ifstream search;
        ofstream searchr;
        search.open("test.csv");
        searchr.open("searchresults.csv");
        getline(search,junk,'\n');
        cout<<"|"<<setw(13)<<"Sr. number"<<"|"<<setw(30)<<"Name"<<"|"<<setw(15)<<"Roll"<<"|"<<setw(20)<<"Opt1"<<"|"<<setw(20)<<"Opt2"<<"|\n";
        searchr<<"Sr. No.,NAME,ROLL,OPTIONAL1,OPTIONAL2";
        while(!search.eof())
        {
            string i,name,roll,opt1,opt2;
            getline(search,i,',');
            getline(search,name,',');
            getline(search,roll,',');
            getline(search,opt1,',');
            getline(search,opt2,'\n');
            string temp;
            temp=stoupper(name);
            y=temp.size();
            if(x<=y)
            {
                int flag=0;
                for(int j=0;sname[j]!='\0';j++)
                {
                    if(temp[j]==sname[j])
                    {
                        flag=1;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    cout<<"|"<<setw(13)<<h<<"|"<<setw(30)<<name<<"|"<<setw(15)<<roll<<"|"<<setw(20)<<opt1<<"|"<<setw(20)<<opt2<<"|\n";
                    searchr<<'\n'<<h<<","<<name<<","<<roll<<","<<opt1<<","<<opt2;
                    f=1;
                    h++;
                }
            }
        }
        if(f==0)
        {
            cout<<"NO RESULTS FOUND\n\n";
            if(q==1||q==2)
            {
                int k;
                cout<<"Do you want to search again to ";
                if(q==1)
                cout<<"edit?";
                else if(q==2)
                cout<<"delete?";
                cout<<"\nPRESS:\n1:YES\n2:NO(default)\nYOUR CHOICE: ";
                cin>>k;
                if(k==1)
                {
                    search.close();
                    searchr.close();
                    sname="NULL";
                    goto s;
                }
                else
                {
                    search.close();
                    searchr.close();
                    h=-187928;
                    q=0;
                    sname="EXIT";
                    goto s;
                }
            }
        }
        search.close();
        searchr.close();
        if(q==0)
        {
            sname="NULL";
            int v=remove("searchresults.csv");
            goto s;
        }
    }
    else
    cout<<"\nEXITING SEARCH\n";
}
void edit()
{
    int x=1,y,z=1;
    string sr="",editroll="",temp1="",temp2="",temp3="",fname="",froll="",fopt1="",fopt2="",temp="";
    searchn(x,"NULL",1);
    if(x!=-187928)
    {
        if(x!=2)
        {
            cout<<"\n\nWhich sr. number do you want to delete?\n(NOTE: If the sr. number entered is not present then by default the option would be selected as sr. number 1.\n\nYOUR CHOICE:\t";
            cin>>y;
            cin.ignore(1,'\n');
            if(y>=x||y<1)
            y=1;
        }
        else
        y=1;
        sr=inttostr(y);
        cout<<"SR="<<sr<<'\n';
        ifstream obtsr;
        obtsr.open("searchresults.csv");
        while(!obtsr.eof())
        {
            string i,name,roll,junk;
            getline(obtsr,i,',');
            getline(obtsr,name,',');
            getline(obtsr,roll,',');
            getline(obtsr,junk,'\n');
            cout<<"i="<<i<<'\n';
            if(sr==i)
            {
                cout<<"SR="<<sr<<'\n';
                editroll=roll;
                break;
            }
        }
        cout<<"EDITROLL="<<editroll<<'\n';
        obtsr.close();
        ifstream editin;
        editin.open("test.csv");
        int d=0;
        while(editin)
        {
            string i,name,roll,opt1,opt2;
            getline(editin,i,',');
            getline(editin,name,',');
            getline(editin,roll,',');
            getline(editin,opt1,',');
            getline(editin,opt2,'\n');
            if(editroll==roll)
            {
                fname=name;
                froll=roll;
                fopt1=opt1;
                fopt2=opt2;
                temp1=temp1+i+',';
                d=1;
            }
            else if(d==0)
            temp1=temp1+i+','+name+','+roll+','+opt1+','+opt2+'\n';
            else if(i!="")
            temp3=temp3+'\n'+i+','+name+','+roll+','+opt1+','+opt2;
        }
        e:
        cout<<"|"<<setw(30)<<"Name"<<"|"<<setw(15)<<"Roll"<<"|"<<setw(20)<<"Opt1"<<"|"<<setw(20)<<"Opt2"<<"|\n";
        cout<<"|"<<setw(30)<<fname<<"|"<<setw(15)<<froll<<"|"<<setw(20)<<fopt1<<"|"<<setw(20)<<fopt2<<"|\n";
        cout<<"\n\nPRESS:\n1 to change name\n2 to change roll\n3 to change marke of opt 1\n4 to change marks of opt 2\n5 to stop editing(default)\n\nYOUR CHOICE:";
        cin>>z;
        cin.ignore(1,'\n');
        if(z==1)
        {
            cout<<"\n\nOLD NAME: "<<fname<<"\n\nEnter the new name: ";
            getline(cin,fname);
        }
        else if(z==3)
        {
            cout<<"\n\nOLD MARKS IN OPTIONAL 1: "<<fopt1<<"\n\nEnter the new marks of optional 1: ";
            getline(cin,fopt1);
        }
        else if(z==4)
        {
            cout<<"\n\nOLD MARKS IN OPTIONAL 2: "<<fopt2<<"\n\nEnter the new marks of optional 2: ";
            getline(cin,fopt2);
        }
        else if(z==2)
        {
            cout<<"\n\nOLD ROLL NUMBER: "<<froll<<"\n\nEnter the new roll number: ";
            getline(cin,froll);
        }
        else
        goto e1;
        goto e;
        e1:
        temp2=fname+','+froll+','+fopt1+','+fopt2;
        temp=temp1+temp2+temp3;
        ofstream edited;
        edited.open("test.csv");
        edited<<temp;
        edited.close();
        int g=remove("searchresults.csv");
    }
    else
    {
        cout<<"\n\n*EDITING CANCELLED*\n\n";
    }
}
void deleteadata()
{
    int x=1,y,z;
    string sr,delroll,fdata="";
    delbeg:
    searchn(x,"NULL",2);
    if(x!=-187928)
    {
        if(x!=2)
        {
            cout<<"\n\nWhich sr. number do you want to delete?\n(NOTE: If the sr. number entered is not present then by default the option would be selected as sr. number 1.\n\nYOUR CHOICE:\t";
            cin>>y;
            cin.ignore(1,'\n');
            if(y>=x||y<1)
            y=1;
        }
        else
        y=1;
        cout<<"Are you sure you want to delete this data?\nPRESS:\n1:YES\n2:NO(default)\n3:Choose another data\n\nYOUR CHOICE:\t";
        int g;
        cin>>g;
        if(g==1)
        {   
            sr=inttostr(y);
            cout<<"SR="<<sr<<'\n';
            ifstream obtsr("searchresults.csv");
            while(!obtsr.eof())
            {
                string i,name,roll,junk;
                getline(obtsr,i,',');
                getline(obtsr,name,',');
                getline(obtsr,roll,',');
                getline(obtsr,junk,'\n');
                if(sr==i)
                {
                    delroll=roll;
                    break;
                }   
            }
            obtsr.close();
            cout<<delroll;
            int h=0;
            ifstream del("test.csv");
            string junk;
            getline(del,junk,'\n');
            fdata=junk;
            while(!del.eof())
            {
                string i,name,roll,opt1,opt2;
                getline(del,i,',');
                getline(del,name,',');
                getline(del,roll,',');
                getline(del,opt1,',');
                getline(del,opt2,'\n');
                if(delroll!=roll&&h==0)
                {
                    fdata=fdata+'\n'+i+','+name+','+roll+','+opt1+','+opt2;
                }
                else if(delroll==roll)
                {
                    h=1;
                    z=strtoint(i);
                }
                else if(h==1)
                {
                    string i;
                    i=inttostr(z);
                    cout<<"\ni="<<i;
                    fdata=fdata+'\n'+i+','+name+','+roll+','+opt1+','+opt2;
                    z++;
                }
            }
            del.close();
            ofstream newdata;
            newdata.open("test.csv");
            newdata<<fdata;
            newdata.close();
            int b=remove("searchresults.csv");
        }
        else if(g==3)
        {
            int b=remove("searchresults.csv");
            goto delbeg;
        }
        else
        {
            cout<<"\n\nENDING DELETION\n\n";
            int b=remove("searchresults.csv");
        }
    }
    else
    {
        cout<<"\n\n*DELETING CANCELLED*\n\n";
    }
}

void nods(int x)
{
    cout<<"\n\nThere are "<<x-1<<" datas stored in the drive\n\n";
}
void storenostud(int x)
{
    ofstream store("noofdata.txt",ios::out);
    store<<x;
    store.close();
}
void getnostud(int &x)
{
    ifstream getnostud("noofdata.txt",ios::in);
    getnostud>>x;
    getnostud.close();
}
void showdata()
{
    ifstream csvi("test.csv");
    while(!csvi.eof())
    {
        string i,name,roll,opt1,opt2;
        getline(csvi,i,',');
        getline(csvi,name,',');
        getline(csvi,roll,',');
        getline(csvi,opt1,',');
        getline(csvi,opt2,'\n');
        cout<<"|"<<setw(13)<<i<<"|"<<setw(30)<<name<<"|"<<setw(15)<<roll<<"|"<<setw(20)<<opt1<<"|"<<setw(20)<<opt2<<"|\n";
    }
    csvi.close();
}
void choose(int &d)
{
    cout<<"PRESS\n1: To handle the file again\nAny key: To EXIT\n";
    cin>>d;
}
int main()
{
    correction();
    int f=0;
    {
        int x=1;
        {
            string c,junk;
            ifstream csvr("test.csv");
            while(!csvr.eof())
            {
                getline(csvr,c,',');
                getline(csvr,junk,'\n');
                if(isdigit(c[0]))
                x++;
                f++;
            }
        }
        storenostud(x);
        cout<<f<<','<<x;
    }
    int n,e=2,x,i,d;
    test1:
    cout<<"PRESS:\n1:To add data to existing file\n2:To remove data present and start with a fresh file(default)\n3:To print the currently stored data of the file\n4:search\n5:edit\n6:Delete a student's data\n7:EXIT\n\nYOUR CHOICE:\t";
    cin>>e;
    getnostud(x);
    ofstream csvo;
    nodata:
    if(e==1)
    {
        csvo.open("test.csv",ios::app);
        nods(x);
        if(x>1)
        csvo<<'\n';
    }
    else if(e==3)
    {
        nods(x);
        if(x>1)
        showdata();
        else
        cout<<"\n\nSORRY::there is no data present in the file to view.\n\n";
        goto test;
    }
    else if(e==4)
    {
        if(x>1)
        {
            int h=1;
            searchn(h,"NULL",0);
            goto test1;
        }
        else
        {
            cout<<"\n\nSORRY:There is no data in the file.\n\n";
            e=2;
            goto nodata;
        }
    }
    else if(e==5)
    {
        if(x>1)
        {
            edit();
            showdata();
            goto test1;
        }
        else
        {
            cout<<"\n\nSORRY:There is no data in the file.\n\n";
            e=2;
            goto nodata;
        }
        
    }
    else if(e==6)
    {
        if(x>1)
        {
            deleteadata();
            showdata();
            goto test1;
        }
        else
        {
            cout<<"\n\nSORRY:There is no data in the file.\n\n";
            e=2;
            goto nodata;
        }
    }
    else if(e==7)
    {
        goto exit;
    }
    else 
    {
        cout<<"\n\nBegining fresh file::\n\n";
        csvo.open("test.csv",ios::out);
        e=2;
    }
    if(e==1&&f==0||e==2)
    csvo<<"Sr. No.,NAME,ROLL,OPTIONAL1,OPTIONAL2\n";
    cout<<"Enter the number of students\n";
    cin>>n;
    n=n+x-1;
    cin.ignore(1,'\n'); 
    for(i=x;i<=n;i++)
    {
        int l=1;
        storeroll();
        string name,roll,opt1,opt2,pname="";
        cout<<"Enter details of student "<<i<<":\n";
        cout<<"NAME:";
        getline(cin,name);
        reroll:
        cout<<"ROLL: ";
        getline(cin,roll);
        int c=checkuniqueroll(roll,pname);
        if(c==0)
        {
            cout<<"ERROR:Two students cannot have same roll number.\nThe roll number "<<roll<<" already belongs to "<<pname<<"\nPRESS:\n1:To re-enter roll number\n2:To skip student\n3:To re-enter student information(default)\n4:To stop adding further data\n\nYOUR CHOICE:\t";
            cin>>l;
            cin.ignore(1,'\n');
            if(l==1)
            goto reroll;
        }
        if(l==1)
        {
            cout<<"OPTIONAL1: ";
            getline(cin,opt1);
            cout<<"OPTIONAL2: ";
            getline(cin,opt2);
            csvo<<i<<","<<name<<","<<roll<<","<<opt1<<","<<opt2;
            if(i!=n)
            csvo<<'\n';
        }
        else if(l==3)
        i--;
        else if(l==4)
        i=x;
        else if(l==2)
        {
            i--;
            n--;
        }
    }
    csvo.close();
    correction();
    storenostud(i);
    showdata();
    test:
    choose(d);
    if(d==1)
    goto test1;
    else
    exit:cout<<"\n::EXIT::\n\n\a";
    system("pause");
    system("CLS");
}