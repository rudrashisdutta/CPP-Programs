#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Quadratic equation: a*x square + b*x + c\n";
    cout<<"Enter the coefficient of x square (a):\t";
    cin>>a;
    cout<<"Enter the coefficient of x (b):\t";
    cin>>b;
    cout<<"Enter the constant (c):\t";
    cin>>c;
    int root1,root2,dis,root;
    double d=b*b-4*a*c;
    if(d<0){
        cout<<"The roots are imaginery.";
    }
    else if(d==0){
        root=-(b)/(2*a);
        cout<<"The quadratic equation has only one root= "<<root;
    }
    else{
        dis=sqrt(d);
        root1=(-(b)+dis)/(2*a);
        root2=(-(b)-dis)/(2*a);
        cout<<"The roots are:\t"<<root1<<" and "<<root2<<".";
    }
}