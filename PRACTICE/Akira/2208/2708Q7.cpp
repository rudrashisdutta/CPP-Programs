#include<iostream>
using namespace std;
class Book{
    int stock;
    string title,author,publisher;
    double price;
    public:
    Book(){}
    Book(string t,string a,string p,double pr,int s){
        title=t;
        author=a;
        publisher=p;
        price=pr;
        stock=s;
    }
    int stockAvail(int n){
        if(stock>=n)
        return 1;
        else return 0;
    }
    int equals(string t,string a){
        if(t==title&&a==author)
        return 1;
        else
        return 0;
    }
    void printData(int n){
        cout<<"\n\nTitle:\t"<<title<<"\nAuthor:\t"<<author<<"\nPrice:\t"<<price*n<<"\nPublisher:\t"<<publisher;
        stock-=n;
    }
};
int main(){
    Book book[3];
    book[0]=Book("Physics","HC Verma","Dhanpat Rai",150,6);
    book[1]=Book("Maths","HC Verma","Dhanpat Rai",153,3);
    book[2]=Book("Computer","HC Verma","Dhanpat Rai",155,10);
    string t,a;
    char ch='y';
    while(ch=='y'){
        cout<<"Enter the title of the book:\t";
        getline(cin,t);
        cout<<"Enter the author of the book:\t";
        getline(cin,a);
        int d=0;
        for(int i=0;i<3;i++){
            if(book[i].equals(t,a)==1){
                d=1;
                cout<<"Enter the number or copies you need:\t";
                int noc;
                cin>>noc;
                if(book[i].stockAvail(noc)==1){
                    cout<<"Purchased:\n\n";
                    book[i].printData(noc);
                }
                else{
                    cout<<"Required copies out of stock!";
                    d=1;
                }
            }
        }
        if(d==0){
            cout<<"\n\nBook not available!";
        }
        cout<<"\n\nDo you want to purchase another book?\nPress 'y' and click enter to do so:\t";
        cin>>ch;
        cin.ignore(1,'\n');
    }
}