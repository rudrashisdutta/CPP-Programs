#include<stdio.h>
void main(){
    struct node{
        int a,b,c;
    };
    struct node num = {3,5,7};
    struct node *ptr = &num;
    printf("%d\n",*((int*)ptr+2));
}