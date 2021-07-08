#include<iostream>
#include<iomanip>
using namespace std;
class intArr{
    int *x,size,ssize;
    public:
    intArr(int s){
        size=s;
        x=(int*)calloc(size,sizeof(int));
    }
    intArr(int s1,int s2){
        if(s1>s2){
            size=s1;
            ssize=s2;
        }
        else{
            size=s2;
            ssize=s1;
        }
        x=(int*)calloc(size,sizeof(int));
    }
    int getSize(){
        return size;
    }
    void enterArr(){
        for(int i=0;i<size;i++)
        cin>>*(x+i);
    }
    void printArr(){
        for(int i=0;i<size;i++)
        cout<<*(x+i)<<'\t';
    }
    void add(intArr a1,intArr a2){
        for(int i=0;i<ssize;i++){
            *(x+i)=*(a1.x+i)+*(a2.x+i);
        }
        if(size==a1.size){
            for(int i=ssize;i<size;i++)
            *(x+i)=*(a1.x+i);
        }
        else{
            for(int i=ssize;i<size;i++)
            *(x+i)=*(a2.x+i);
        }
    }
};
int main(){
    int m,n;
    cout<<"Enter the size of the first array:\t";
    cin>>m;
    cout<<"Enter the size of the second array:\t";
    cin>>n;
    intArr a(m);
    intArr b(n);
    cout<<"Enter the first array:\n";
    a.enterArr();
    cout<<"Enter the second array:\n";
    b.enterArr();
    intArr c(a.getSize(),b.getSize());
    c.add(a,b);
    cout<<"The added array is:\t";
    c.printArr();
}