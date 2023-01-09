#include<stdio.h>
void swap(int*,int*);
int main(){
    int a,b;
    printf("Enter the Numbers:");
    scanf("%d %d",&a,&b);
    int *p=&a;
    int *q=&b;
    swap(p,q);

    printf("Swapped Numbers:%d %d",a,b);
}
void swap(int* p, int* q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
