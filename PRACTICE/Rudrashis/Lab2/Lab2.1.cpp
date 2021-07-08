#include<iostream>
using namespace std;
void swapR(int *x, int *y)  
{  
    cout<<"a="<<*x<<"b="<<*y;
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
    cout<<"a="<<*x<<"b="<<*y;
}
void swapV(int a, int b)
{
    cout<<"a="<<a<<"b="<<b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"a="<<a<<"b="<<b;
}

int main(){
    int a=5,b=8;
    swap()
}