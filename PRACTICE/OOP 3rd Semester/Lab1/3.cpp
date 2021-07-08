#include<iostream>
#include<math.h>
using namespace std;
double root1(double a,double b,double d){
    double root;
    root = (-b + sqrt(d))/(2 * a);
    return root;
}
double root2(double a,double b,double d){
    double root;
    root = (-b - sqrt(d))/(2 * a);
    return root;
}
double discriminant(double a,double b,double c){
    return (b*b) - (4*a*c);
}
int main(){
    double a,b,c;
    cout<<"Enter the coefficient of x square:\t";
    cin>>a;
    cout<<"Enter the coefficient of x:\t";
    cin>>b;
    cout<<"Enter the constant:\t";
    cin>>c;
    double d = discriminant(a,b,c);
    cout<<"The roots of the quadratic equation ";
    if(d>0){
        cout<<"are:\t"<<root1(a,b,d)<<" and "<<root2(a,b,d)<<".";
    }
    else if(d==0){
        cout<<"is:\t"<<root1(a,b,d)<<".";
    }
    else{
        cout<<"are imaginery.";
    }
}