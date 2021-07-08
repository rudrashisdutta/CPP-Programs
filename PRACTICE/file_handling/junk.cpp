#include<iostream>
#include<fstream>
#include<iomanip>
#include<sstream>
using namespace std;
int strtoint(string a);
string inttostr(int x);
string stoupper(string s);
void searchn(int &h,string sname,int q);
void deleteadata();
void select();
string returni(string filename,string x);
void removefromcopyfileandstoreinselect(string filename1,string filename2);
void countnoofstuds(string filename,int &f,int &x);
void storenostud();
void getnostud(int &x);
int main()
{
    int h=1;
    string x="j";
    deleteadata();
}
int strtoint(string a)
{
    int x=0;
    stringstream as(a);
    as>>x;
    return x;
}

string inttostr(int x)
{
    stringstream ss;
    string s;
    ss<<x;
    ss>>s;
    return s;
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
void searchn(int &h,string sname,int q,string filename)
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
        search.open(filename.c_str());
        searchr.open("searchresults.csv");
        getline(search,junk,'\n');
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
                    if(h==1)
                    cout<<"|"<<setw(9)<<"Sr. number"<<"|"<<setw(30)<<"Name"<<"|"<<setw(15)<<"Roll"<<"|"<<setw(20)<<"Opt1"<<"|"<<setw(20)<<"Opt2"<<"|\n";
                    cout<<"|"<<setw(9)<<h<<"|"<<setw(30)<<name<<"|"<<setw(15)<<roll<<"|"<<setw(20)<<opt1<<"|"<<setw(20)<<opt2<<"|\n";
                    searchr<<'\n'<<h<<","<<name<<","<<roll<<","<<opt1<<","<<opt2;
                    f=1;
                    h++;
                }
            }
        }
        if(f==0)
        {
            cout<<"NO RESULTS FOUND\n\n";
            if(q==1||q==2||q==3)
            {
                int k;
                cout<<"Do you want to search again to ";
                if(q==1)
                cout<<"edit?";
                else if(q==2)
                cout<<"delete?";
                else if(q==3)
                cout<<"\b?";
                cout<<"\nPRESS:\n1:YES\n2:NO(default)\nYOUR CHOICE:\t";
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
void deleteadata()
{
    int x=1,y,z;
    string sr,delroll,fdata="";
    delbeg:
    searchn(x,"nkjwnoyb",2,"test.csv");
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
        int b=remove("searchresults.csv");
    }
}
void select()
{
    select1:
    int numofdatarem=0,op=0;
    string junk,junk1;
    ifstream obj("test.csv");
    ofstream stempo("copied.csv");
    getline(obj,junk);
    stempo<<junk;
    while(!obj.eof())
    {
        getline(obj,junk);
        stempo<<junk;
    }
    obj.close();
    stempo.close();
    show:
    ifstream readcopy;
    readcopy.open("copied.csv");
    while(!readcopy.eof())
    {
        string i,name,roll,opt1,opt2;
        getline(readcopy,i,',');
        getline(readcopy,name,',');
        getline(readcopy,roll,',');
        getline(readcopy,opt1,',');
        getline(readcopy,opt2,'\n');
        cout<<"|"<<setw(13)<<i<<"|"<<setw(30)<<name<<"|"<<setw(15)<<roll<<"|"<<setw(20)<<opt1<<"|"<<setw(20)<<opt2<<"|\n";
    }
    readcopy.close();
    int datasinselect=0;
    cout<<"\n\nPRESS:\n1:TO SELECT USING SR. NUMBER(default)\n2:TO SEARCH AND SELECT A DATA\n3:EXIT SELECT";
    if(numofdatarem>0)
    cout<<"\n4:DESELECT A RECORD\n5:DESELECT ALL";
    cout<<"\nYOUR CHOICE:\t";
    int choice;
    cin>>choice;
    cin.ignore(1,'\n');
    if(choice==2)
    {
        int x=1,y;
        searchn(x,"NULL",3);
        string editroll,sr;
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
                editroll=roll;
                break;
            }
        }
        obtsr.close();
        string srselect=returni("copied.csv",editroll);
        remofromcopyfileandstoreinselect("copied.csv","selected.csv",srselect,numofdatarem);
    }
    else if(choice==3&&numofdatarem>0)
    {

    }
    else if(choice==4&&numofdatarem>0)
    {
        int b1=remove("copied.csv"),b2=remove("selected.csv");
        cout<<"\nDeselecting all selection.\n\nDo you want start a fresh select again?\nPRESS:\n1:YES\n2:NO(default)\nYOUR CHOICE:\t";
        int choice1;
        cin>>choice1;
        if(choice1==1)
        {
            cout<<"\nStart selecting again.\n\n";
            goto select1;
        }
        else
        {
            op=1;
            cout<<"\nDeselecting all selection.\n\n";
            int b1=remove("copied.csv"),b2=remove("seceted.csv");
        }
    }
    else
    {
        
    }
    
}
string returni(string filename,string x)
{
    string c;
    ifstream readfile(filename.c_str());
    while(!readfile.eof())
    {
        string i,name,roll,junk;
        getline(readfile,i,',');
        getline(readfile,name,',');
        getline(readfile,roll,',');
        getline(readfile,junk,'\n');
        if(roll==x)
        {
            c=i;
            break;
        }
    }
    readfile.close();
    return c;
}
void remofromcopyfileandstoreinselect(string filename1,string filename2,string y,int &x)
{
    string filedata="",data,junk1;
    int d=0,n;
    ifstream rc(filename1.c_str());
    getline(rc,junk1,'\n');
    data=junk1;
    while(!rc.eof())
    {
        string i,junk;
        getline(rc,i,',');
        getline(rc,junk,'\n');
        if(i==y)
        {
            filedata=i+','+junk;
            d=1;
            n=strtoint(i);
        }
        else if(d==0)
        {
            data=data+'\n'+i+','+junk;
        }
        else if(d==1)
        {
            string sr=inttostr(n);
            data=data+'\n'+sr+','+junk;
            n++;
        }
    }
    rc.close();
    ofstream ws(filename2.c_str(),ios::app);
    if(x==0)
    {
        ws<<"Sr. No.,NAME,ROLL,OPTIONAL1,OPTIONAL2\n";
        ws<<filedata;
        x++;
    }
    else 
    {
        ws<<'\n'<<filedata;
        x++;
    }
    ofstream newf1(filename1.c_str());
    newf1<<data;
    newf1.close();
}
void storenostud()
{
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
        ofstream store("noofdata.txt",ios::out);
        store<<x;
        store.close();
    }
}
void getnostud(int &x)
{
    ifstream getnostud("noofdata.txt",ios::in);
    getnostud>>x;
    getnostud.close();
}