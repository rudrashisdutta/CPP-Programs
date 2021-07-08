#include<iostream>
using namespace std;
void entermatrix(int m,int n,int a[50][50])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
}
void showmatrix(int m,int n,int a[50][50])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cout<<a[i][j]<<"\t";
        cout<<"\n";
    }
}
void add(int m,int n,int a[50][50],int b[50][50],int c[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
}
void sub(int m,int n,int a[50][50],int b[50][50],int c[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        c[i][j]=a[i][j]-b[i][j];
    }
}
int n_p(int n,int p)
{
    if(n==p)
    return 1;
    else
    {
        return 0;
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
    int x,m,n,p,q,r,a[50][50],b[50][50],c[50][50],d[50][50];
    cout<<"PRESS:\n1: To perform addition of two matrices first\n2: To perform substraction of two matrices first\n3: To perform multiplication of two matrices first\nAny other key: exit\nYour choice:\t";
    cin>>x;
    if(x==1)
    {
        cout<<"Enter the number of rows and columns of the marices:\n";
        cin>>m>>n;
        cout<<"Enter a matrix:\n";
        entermatrix(m,n,a);
        cout<<"Enter another matrix:\n";
        entermatrix(m,n,b);
        add(m,n,a,b,c);
        cout<<"Result after addition:\n";
        showmatrix(m,n,c);
    }
    else if(x==2)
    {
        cout<<"Enter the number of rows and columns of the marices:\n";
        cin>>m>>n;
        cout<<"Enter a matrix:\n";
        entermatrix(m,n,a);
        cout<<"Enter another matrix:\n";
        entermatrix(m,n,b);
        sub(m,n,a,b,c);
        cout<<"Result after subtraction:\n";
        showmatrix(m,n,c);
    }
    else if(x==3)
    {
        cout<<"Enter the number of rows and columns of a matrix:\n";
        cin>>m>>n;
        cout<<"Enter the matrix:\n";
        entermatrix(m,n,a);
        cout<<"Enter the number of rows and columns of another matrix:\n";
        multi1:
        cin>>p>>q;
        cout<<"Enter the matrix:\n";
        entermatrix(p,q,b);
        if(n_p(n,p))
        {
            mult(m,n,a,p,q,b,c);
            cout<<"Result after multiplication is:\n";
            showmatrix(m,q,c);
        }
        else 
        {
            cout<<"Matrix multiplication is not possible as number of columns of first matrix is not equal to the number of rows of second matrix\n";
            cout<<"Enter again for second matrix:\n";
            goto multi1;
        }

    }
    int g;
    cout<<"PRESS:\n1: To add another matrix to the result\n2: To multiply a matrix to the result\n3: To subtract a matrix from the result\n4: To multiply two more matrices\n5: To add two more matrices\n6: To subtract two more matrices\n7: To display the result and exit the operation\n";
    cin>>g;
    if(g==1)
    {
        
    }
}