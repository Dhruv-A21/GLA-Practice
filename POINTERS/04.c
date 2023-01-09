#include<stdio.h>
int main(){
    int N;
    printf("Enter the size of Array:");
    scanf("%d",&N);
    int a[N];
    printf("Enter the Array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int* p=a;
    for(int i=0;i<N;i++){
        printf("%d ",*p);
        p++;
    }
    return 0;
}
