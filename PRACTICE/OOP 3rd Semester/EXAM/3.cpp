#include<iostream>
using namespace std;
class string{
    char str[100];
    public:
    string(){
        cout<<"Enter a string:\t";
        cin>>str;
    }
    char* sub(int index,int len){
        char str3[100];
            int pos = 0;
            while(pos<len){
                str3[pos]=str[pos+index-1];
                pos++;
            }
            str3[pos] = '\0';
        return str3;
    }
    void print(){
        cout<<"\n"<<str;
    }
};
int main(){
    ::string str;
    cout<<"\nsubstring:\t"<<*(str.sub(3,4));
}