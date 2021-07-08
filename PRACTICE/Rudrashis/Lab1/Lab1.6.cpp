#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:\t";
    cin>>n;
    long double value=0.0;
    for(int i=1;i<=n;i++){
        long double x=1.0/(pow(i,i));
        value+=x;
    }
    cout<<"For n= "<<n<<"\nThe value of the series= "<<value;
}