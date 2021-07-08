#include<iostream>
int main()
{
    int a,b;
    std::cout<<"Enter the numbers";
    std::cin>>a>>b;
    if(a>b)
    std::cout<<"Large="<<a;
    else if(b>a)
    std::cout<<"Large="<<b;
    else
    std::cout<<a<<"="<<b;
    
}