#include<iostream>
class DB;
class DM{
    int m,cm;
    public:
    void setData(int sm,int sc){
        m=sm;
        sm=sc;
    }
    void process(){
        m+=(cm/100);
        cm%=100;
    }
    friend void add(DM d,DB b,int x);
};
class DB{
    int ft,in;
    public:
    void setData(int sm,int sc){
        ft=sm;
        in=sc;
    }
    void process(){
        ft+=(in/12);
        in%=12;
    }
    friend void add(DM d,DB b,int x);
};
void add(DM d,DB b,int x){
    if(x==1){
        int inch;
        DM sum;
        inch=b.ft*12+b.in;
        
    }
}