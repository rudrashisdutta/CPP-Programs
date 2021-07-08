#include<iostream>
using namespace std;
class DB;
class DM{
    int meter,centi;
    friend class DB;
    void convert(DB &);
    void optimize(){
        meter+=(centi/100);
        centi%=100;
    }
    public:
    DM(){
        cout<<"Meter:\t";
        cin>>meter;
        cout<<"Centimeter:\t";
        cin>>centi;
        optimize();
    }
    DM(DB &db){
        convert(db);
    }
    DM(DM dm1,DM dm2){
        meter = dm1.meter + dm2.meter;
        centi = dm1.centi + dm2.centi;
        optimize();
    }
    void printDM(){
        cout<<meter<<" meter "<<centi<<" centimeter";
    }
    friend void add(DB &,DM &);
};
class DB{
    int inch,feet;
    friend class DM;
    void convert(DM &dm){
        inch = (float)dm.meter*39.37+(float)dm.centi/2.54;
        feet = 0;
        optimize();
    }
    void optimize(){
        feet+=(inch/12);
        inch%=12;
    }
    public:
    DB(){
        cout<<"Feet:\t";
        cin>>feet;
        cout<<"Inch:\t";
        cin>>inch;
        optimize();
    }
    DB(DM &dm){
        convert(dm);
    }
    DB(DB db1, DB db2){
        feet = db1.feet + db2.feet;
        inch = db1.inch + db2.inch;
        optimize();
    }
    void printDB(){
        cout<<feet<<" feet "<<inch<<" inch";
    }
    friend void add(DB &,DM &);
};
void DM::convert(DB &db){
    centi = (float)db.feet*30.48 + (float)db.inch*2.54;
    meter = 0;
    optimize();
}
void add(DB &db,DM &dm){
    DB dbm(dm);
    DM dmb(db);
    DB added1(db,dbm);
    DM added2(dm,dmb);
    cout<<"meter - centimeter:\t";
    added2.printDM();
    cout<<"\nfeet - inch:\t";
    added1.printDB();
}
int main(){
    DM dm;
    DB db;
    add(db,dm);
}