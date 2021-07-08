#include<iostream>
using namespace std;
class publication
{
protected :
    string title;
    int price;
};
class book:public publication
{
    int nopage;
    int nochap;
    int edition;
public:
   book ()
    {
        cout<<"\n----FOR book-----";
       cout<<"\nEnter title :";
       getline(cin,title);
       cout<<"\nEnter price :";
       cin>>price;
        cout<<"\nEnter no of pages :";
       cin>>nopage;
       cout<<"\nEnter no of chapter :";
       cin>>nochap;
       cout<<"\nEnter edition :";
       cin>>edition;
    }
    void display1()
    {
        cout<<"\n ------detail of book--------";
        cout<<"\n title :";
       cout<<title;
       cout<<"\n price :";
       cout<<price;
        cout<<"\nno of pages :";
       cout<<nopage;
       cout<<"\n no of chapter :";
       cout<<nochap;
       cout<<"\n edition :";
       cout<<edition;
    }
};
class lecturer:public publication
{
    int playtime;
    string nameofspeaker;
public:
   lecturer()
    {
       cout<<"\n----FOR lecturer-----";
       cout<<"\nEnter title :";
       getline(cin,title);
       cout<<"\nEnter price :";
       cin>>price;
       cout<<"\nEnter playtime:";
       cin>>playtime;
       cin.ignore(1,'\n');
       cout<<"\nEnter name of speaker :";
       getline(cin,nameofspeaker);
    }
    void display2()
    {
        cout<<"\n----display detail of lecturer-----";
       cout<<"\n title :";
       cout<<title;
       cout<<"\n price :";
       cout<<price;
       cout<<"\n playtime:";
       cout<<playtime;
       cout<<"\n name of speaker :";
       cout<<nameofspeaker;
    }
};
int main()
{
    book b;
    cin.ignore(1,'\n');
    lecturer l;
     b.display1();
     l.display2();
    return 0;
}