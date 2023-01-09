#include<stdio.h>
int sum(int*,int*);
int main(){
    int a,b;
    printf("Enter the Numbers:");
    scanf("%d %d",&a,&b);
    int *p=&a;
    int *q=&b;
    printf("Sum=%d",sum(p,q));
}
int sum(int* p, int* q){
    int s=*p+*q;
    return (s);
}
