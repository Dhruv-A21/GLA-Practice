#include<stdio.h>
int main(){
    int N;
    printf("Enter the Size of Array:");
    scanf("%d",&N);
    int a[N];
    printf("Enter the Array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int* p=a;
    printf("So Entered Array is:");
    for(int i=0;i<N;i++){
        printf("%d ",p[i]);
    }
    return 0;
}
