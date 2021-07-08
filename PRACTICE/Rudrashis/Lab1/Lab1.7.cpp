#include<iostream>
using namespace std;
int main(){
    int i,j,a,size,number[300];
    cout<<"Enter the number of elements, you would like to sort in ascending order:\t";
    cin>>size;
    cout<<"Enter the numbers\n";
    for (i=0;i<size;++i)
        cin>>number[i];
    for (i=0;i<size;i++)
    {
        for (j=i+1;j<size;j++)
        {
            if (number[i]>number[j]) 
            {
                a=number[i];
                number[i]=number[j];
                number[j]=a;
            }
        }
    }
    cout<<"Smallest:\t"<<number[0]<<"\nLargest:\t"<<number[size-1];
}