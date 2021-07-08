#include<iostream>
#include<iomanip>
using namespace std;
class book{
    private:
    string name,author;
    double price;
    public:
    void setData(double priceC,string nameC,string authorC){
        price=priceC;
        name=nameC;
        author=authorC;
    }
    friend void limit(book B[500],int &,int &,int &);
    void printDetails(){
        cout<<"|"<<left<<setw(30)<<name<<"|"<<setw(30)<<author<<"|"<<setw(15)<<price<<"|";
    }
}Book[500];
void limit(book B[500],int &max,int &min,int &n){
    cout<<"|"<<left<<setw(30)<<"Name"<<"|"<<setw(30)<<"Author"<<"|"<<setw(15)<<"Price"<<"|\n";
    for(int i=0;i<n;i++){
        if(B[i].price>=min&&B[i].price<=max){
            B[i].printDetails();
            cout<<'\n';
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of books:\t";
    cin>>n;
    for(int i=0;i<n;i++){
        string name,author;
        double price;
        cin.ignore(1,'\n');
        cout<<"\n\nBook "<<i+1<<":\n";
        cout<<"Name:\t";
        getline(cin,name);
        cout<<"Author:\t";
        getline(cin,author);
        cout<<"Price:\t";
        cin>>price;
        Book[i].setData(price,name,author);
    }
    int max,min;
    char checker='y';
    while(checker=='y'){
        cout<<"Enter the minimum price:\t";
        cin>>min;
        cout<<"Enter the maximum price:\t";
        cin>>max;
        if(min<=max)
        limit(Book,max,min,n);
        else
        cout<<"Minimum price should be less than the Maximum price.";
        cout<<"\n\n\nPress 'y' to re-enter the limits:\t";
        cin>>checker;
    }
}