#include<iostream>
int det2x2(int a,int b,int c,int d)
{
    int det;
    det=a*d-b*c;
    return det;
}
void transpose(int m,int n,int a[50][50],int b[50][50])
{
    std:: cout<<"Transpose -\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        b[i][j]=a[j][i];
    }
}
void scamult(int m,int n,float x,int a[50][50],float b[50][50])
{
    
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        b[i][j]=x*(float)a[i][j];
    }
}
void mult(int m,int n,int a[50][50],int p,int q,int b[50][50],int res[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            res[i][j]=0;
            for(int k=0;k<n;k++)
            {
                res[i][j]=res[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
}
int main()
{
    int a,b,c,d,e,f,A[50][50],B[50][50],C[50][50],D[50][50];
    float X[50][50];
    std::cout<<"FIRST EQUATION: ax + by = c\nEnter the values of a,b,c of the first equation:\n";
    std::cin>>a>>b>>c;
    std::cout<<"SECOND EQUATION: dx + ey = f\nEnter the values of d,e,f of the second equation:\n";
    std::cin>>d>>e>>f;
    A[0][0]=a;
    A[0][1]=b;
    A[1][0]=d;
    A[1][1]=e;
    B[0][0]=c;
    B[1][0]=f;
    int det=det2x2(a,b,d,e);
    float scal=1.0F/(float)det;
    transpose(2,2,A,C);
    mult(2,2,C,2,1,B,D);
    scamult(2,1,scal,D,X);
        std::cout<<"The solution of the entered equtions "<<a<<"x + "<<b<<"y = "<<c<<"  and  "<<d<<"x + "<<e<<"y = "<<f<<"  are:\nx = "<<X[0][0]<<"\ny = "<<X[1][0]<<"\n";
}