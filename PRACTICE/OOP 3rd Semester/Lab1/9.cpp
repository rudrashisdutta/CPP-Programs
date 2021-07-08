#include<iostream>
using namespace std;
struct book
{
    string author,title;
    double price;
};
int main(){
    int n;
    cout<<"Enter the number of books:\t";
    cin>>n;
    book b[n];
    for(int i=0;i<n;i++){
        cin.ignore(1,'\n');
        cout<<"Enter the details for book "<<i+1<<":\n\nAuthor:\t";
        getline(cin,b[i].author);
        cout<<"Title:\t";
        getline(cin,b[i].title);
        cout<<"Price:\t";
        cin>>b[i].price;
    }
    for(int i=0;i<n;i++){
        cout<<"\n\nBook number "<<i+1<<":\nAuthor:\t"<<b[i].author<<"\nTitle:\t"<<b[i].title<<"\nPrice:\t"<<b[i].price;
    }
}