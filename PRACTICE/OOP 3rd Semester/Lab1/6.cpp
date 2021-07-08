#include<iostream>
#include<math.h>
using namespace std;
double valueOfSingle(double i){
    return 1 / (pow(i,i));
}
double valueOfTheSeries(double n){
    double value=0;
    for(int i=1;i<=n;i++){
        value+=(valueOfSingle(i));
    }
    return value;
}
int main(){
    double number;
    cout<<"Enter the value of 'n':\t";
    cin>>number;
    cout<<"The value of the series = "<<valueOfTheSeries(number);
}