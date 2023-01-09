#include<stdio.h>
int main(){
    int N;
    printf("Enter the size of Array:");
    scanf("%d",&N);
    int a[N],b[N];
    printf("Enter the Array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int *p=a;
    for(int i=0;i<N;i++){
        b[i]=*p;
        p++;
    }
    for(int i=0;i<N;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
