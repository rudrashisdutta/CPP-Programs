#include<stdio.h>

void main(){
    int n;
    printf("Enter the number of elements in the array:\t");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int small=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<small)
        small = arr[i];
    }
    int large = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>large)
        small = arr[i];
    }

    for(int i=small;i<=large;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag == 0){
            cout<<
        }
    }
}