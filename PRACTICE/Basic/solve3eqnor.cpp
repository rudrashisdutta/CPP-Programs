#include<iostream>
void solve(int a,int b,int c,int d,int e,int f,int g,int h,int i,int m,int n,int o,float x,float y,float z)
{
    int p=a*e-d*b,q=a*h-g*b,r=a*i-g*c,s=a*f-c*d;
    z=(float)(a*o*p-g*b*p+d*m*q-a*n*q)/(float)(r*p-s*q);
    y=(float)((a*n-d*m)-z*(a*f-c*d))/(float)p;
    x=(float)(m-b*y-c*z)/(float)a;
}
int main()
{
  int a,b,c,d,e,f,g,h,i,m,n,o;
    float x,y,z;
    std::cout<<"FIRST EQUATION: ax + by + cz = m\nEnter the values of a,b,c,m of the first equation:\n";
    std::cin>>a>>b>>c>>m;
    std::cout<<"SECOND EQUATION: dx + ey + fz = n\nEnter the values of d,e,f,n of the second equation:\n";
    std::cin>>d>>e>>f>>n;
    std::cout<<"THIRD EQUATION: gx + hy + iz = o\nEnter the values of g,h,i,o of the first equation:\n";
    std::cin>>g>>h>>i>>o;   
    solve(a,b,c,d,e,f,g,h,i,m,n,o,x,y,z);
    std::cout<<"The solution of the entered equtions "<<a<<"x + "<<b<<"y + "<<c<<"z = "<<m<<"  ,  "<<d<<"x + "<<e<<"y + "<<f<<"z = "<<n<<"  and  "<<g<<"x + "<<h<<"y + "<<i<<"z = "<<o<<"are:\nx = "<<x<<"\ny = "<<y<<"\nz = "<<z<<"\n";
}