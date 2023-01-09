#include<stdio.h>
//Program to Find 2nd Largest in a matrix
int main(){
    int N;
    printf("Enter the size  of Array:");
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1-i;j++){
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int max=a[0];
    for(int i=0;i<N;i++){
        if(a[i]!=max){
            printf("2nd Largest:%d",a[i]);
            break;
        }
    }
    return 0;
}
