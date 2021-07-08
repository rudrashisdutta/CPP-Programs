#include<iostream>
#include<algorithm>
using namespace std;
class FRACTION{
    int denominator,numerator;
    void optimize(){
        int gcd = __gcd(denominator,numerator);
        denominator/=gcd;
        numerator/=gcd;
    }
    int lcm(int x,int y){
        int LCM = (x*y)/__gcd(x,y);
        return LCM;
    }
    void add(FRACTION num1,FRACTION num2){
        if(num1.denominator!=num2.denominator){
            denominator = lcm(num1.denominator,num2.denominator);
        }
        else{
            denominator = num1.denominator;
        }
        numerator = (num1.numerator*(denominator/num1.denominator))+(num2.numerator*(denominator/num2.denominator));
        optimize();
    }
    void subtract(FRACTION num1,FRACTION num2){
        if(num1.denominator!=num2.denominator){
            denominator = lcm(num1.denominator,num2.denominator);
        }
        else{
            denominator = num1.denominator;
        }
        numerator = (num1.numerator*(denominator/num1.denominator))-(num2.numerator*(denominator/num2.denominator));
        optimize();
    }
    void multiply(FRACTION num1,FRACTION num2){
        numerator = num1.numerator * num2.numerator;
        denominator = num1.denominator * num2.denominator;
        optimize();
    }
    public:
    FRACTION(){
        cout<<"Numerator:\t";
        cin>>numerator;
        cout<<"Denominator:\t";
        cin>>denominator;
        optimize();
    }
    FRACTION(FRACTION num1,FRACTION num2,int opt){
        if(opt == 1){
            add(num1,num2);
        }
        else if(opt == 2){
            subtract(num1,num2);
        }
        else if(opt == 3){
            multiply(num1,num2);
        }
    }
    void printFraction(){
        cout<<numerator<<"/"<<denominator;
    }
};
int main(){
    cout<<"Enter a fraction:\n";
    FRACTION fract1;
    cout<<"Enter another fraction:\n";
    FRACTION fract2;
    FRACTION added(fract1,fract2,1);
    cout<<"Addition:\t";
    added.printFraction();
    FRACTION subtracted(fract1,fract2,2);
    cout<<"\nSubtracted:\t";
    subtracted.printFraction();
    FRACTION multiplied(fract1,fract2,3);
    cout<<"\nMultiplied:\t";
    multiplied.printFraction();
}