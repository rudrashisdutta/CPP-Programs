#include<iostream>
#include<string>
using namespace std;
struct Books{
    double price;
    string author,title;
};
int main(){
    int n;
    cout<<"Number of books:\t";
    cin>>n;
    Books book[100];
    for(int i=0;i<n;i++){
        cin.ignore(1,'\n');
        cout<<"Book"<<i+1<<":\nTitle of the book:\t";
        getline(cin,book[i].title);
        cout<<"Name of the Author:\t";
        getline(cin,book[i].author);
        cout<<"Price:\t";
        cin>>book[i].price;
    }
    for(int i=0;i<n;i++){
        cout<<"\n\nTitle of the book:\t"<<book[i].title<<"\nName of the Author:\t"<<book[i].author<<"\nPrice:\t"<<book[i].price;
    }
}