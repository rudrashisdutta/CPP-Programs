#include<iostream>
using namespace std;
class Age{
    const int DS1=30,DS2=28,DS3=29,DS4=31;
    struct date{
        int day,month,year;
    }bd,d,a;
    int validYear(int year){
        if(d.year==year)
        return 1;
        else if(d.year>year)
        return 2;
        else
        return 0;
    }
    int validMonth(int n){
        int x=1;
        if(n<1||n>12)
        x=0;
        return x;
    }
    int validMonth(int n,int m,int year){
        int x=1,y=validYear(year);
        if(y==1){
            if(n<1||n>m)
            x=0;
            else if(n==m)
            x=2;
            else
            x=3;
        }
        else if(y==2){
            x=validMonth(n);
        }
        return x;
    }
    int isLeap(int n){
        if(n%400 == 0)
        return 1;
        else if(n%100 == 0)
        return 1;
        else if (n%4 == 0)
        return 1;
        return 0;
    }
    int validDay(int n,int m,int o,int p=13){//general date check
        int x=n,y=0;
        if((x==1||x==3||x==5||x==7||x==8||x==10||x==12)&&x<p){
            if(m>0&&m<=DS4)
            y=4;
        }
        else if((x==2&&isLeap(o)==1)&&x<p){
            if(m>0&&m<=DS3)
            y=3;
        }
        else if(x==2&&x<p){
            if(m>0&&m<=DS2)
            y=2;
        }
        else if((x==4||x==6||x==9||x==11)&&x<p){
            if(m>0&&m<=DS1)
            y=1;
        }
        return y;
    }
    int validDay(int year){//special for bd
        int x=bd.day,y=0,z=validMonth(bd.month,d.month,year);
        if(z==2){
            if(validDay(bd.month,bd.day,year)!=0&&bd.day<=d.day)
            y=2;
            else
            y=0;
        }
        else if(z==1){
            if(validDay(bd.month,bd.day,year)!=0)
            y=1;
            else
            y=0;
        }
        else if(z==3){
            if(validDay(bd.month,bd.day,year,d.month)!=0)
            y=3;
            else
            y=0;
        }
        return y;
    }
    void printDate(int y,int m,int d){
        cout<<"\n\n"<<y<<"-"<<m<<"-"<<d<<"\n";
    }
    void printAge(){
        cout<<"\n\nAge:\t"<<a.year<<" years "<<a.month<<" months "<<a.day<<" days old.";
    }
    int showDays(int x,int o){
        if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
        return DS4;
        else if(x==2&&isLeap(o)==1)
        return DS3;
        else if(x==2)
        return DS2;
        else if(x==4||x==6||x==9||x==11)
        return DS1;
        return 0;
    }
    void calculateAge(){
        a.year=d.year-bd.year;
        if(d.month-bd.month<0)
        a.year-=1;
        if(d.month-bd.month<0){
            a.month=(12-bd.month)+d.month-1;
        }
        else{
            a.month=d.month-bd.month-1;
        }
        if(bd.day<=d.day){
            a.month+=1;
            a.day=d.day-bd.day;
        }
        else{
            int x;
            if(d.month-1==0){
                x=12;
            }
            else
            x=d.month-1;
            a.day=(showDays(x,d.year)-bd.day)+d.day;
        }
    }
    void enterDate(){
        cout<<"\n\nYear:\t";
        cin>>d.year;
        dmonth:
        cout<<"\nMonth(1-12):\t";
        cin>>d.month;
        if(validMonth(d.month)==1){
            ddate:
            cout<<"\nDate of the month:\t";
            cin>>d.day;
            int y=validDay(d.month,d.day,d.year);
            if(y!=0){
                bdyr:
                cout<<"\n\nBirth Year:\t";
                cin>>bd.year;
                if(validYear(bd.year)!=0){
                    bdmonth:
                    cout<<"\n\nBirth Month:\t";
                    cin>>bd.month;
                    int chbm=validMonth(bd.month,d.month,bd.year);
                    if(chbm!=0){
                        bddate:
                        cout<<"\n\nDate of the birth month:\t";
                        cin>>bd.day;
                        int chbdd=validDay(bd.year);
                        if(chbdd!=0){
                            cout<<"Entered date:";
                            printDate(d.year,d.month,d.day);
                            cout<<"Birth date:\t";
                            printDate(bd.year,bd.month,bd.day);
                            calculateAge();
                            printAge();
                        }
                        else{
                            cout<<"\n\nInvalid Birth day!\nEnter Again!\n\n";
                            goto bddate;
                        }
                    }
                    else{
                        cout<<"\n\nInvalid Birth month!\nEnter Again!\n\n";
                        goto bdmonth;
                    }
                }
                else{
                    cout<<"\n\nBirth year cannot be more than entered year!\nEnter Again!\n\n";
                    goto bdyr;
                }
            }
            else{
                cout<<"\n\nInvalid day!\nEnter Again!\n\n";
                goto ddate;
            }
        }
        else{
            cout<<"\n\nInvalid month!\nEnter Again!\n\n";
            goto dmonth;
        }
    }
    public:
    Age(){
        enterDate();
    }
};
int main(){
    Age a;
}