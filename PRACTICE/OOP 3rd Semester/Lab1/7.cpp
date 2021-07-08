#include<iostream>
using namespace std;
int smallest(int arr[],int size){
    int smallest = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<smallest)
        smallest = arr[i];
    }
    return smallest;
}
int largest(int arr[],int size){
    int largest = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>largest)
        largest = arr[i];
    }
    return largest;
}
int main(){
    int arr[500],size;
    cout<<"Enter the number of elements in the array:\t";
    cin>>size;
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The largest number the array: \t"<<largest(arr,size)<<".\nThe smallest number in the array:\t"<<smallest(arr,size)<<".";
}