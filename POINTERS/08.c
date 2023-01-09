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
    int *p=a;
    int ele;
    printf("Search for element:");
    scanf("%d",&ele);
    int k=0;
    for(int i=0;i<N;i++){
        if(ele==*p){
            k=i;
            break;
        }
        p++;
    }
    printf("Element is on the index:%d",k);
    return 0;
}
