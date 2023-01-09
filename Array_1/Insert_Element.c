#include<stdio.h>
//Insert an element at position X;
int main(){
    int N;
    printf("Enter the Array Size:");
    scanf("%d",&N);
    int a[N+1];

    printf("Enter the Array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int ele,pos;
    printf("Enter the element and position:");
    scanf("%d %d",&ele,&pos);
    for(int i=pos;i<N+1;i++){
        int temp=a[i];
        a[i]=ele;
        ele=temp;
    }
    printf("New Array:");
    for(int i=0;i<N+1;i++){
        printf("%d ",a[i]);

    }
    return 0;
}
