#include<stdio.h>
//Frequency of Array
int main(){
    int N,f[1000]={0};
    printf("Enter the size of Array:");
    scanf("%d",&N);
    int a[N];
    printf("Enter the Array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int max=0;
    for(int i=0;i<N;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<max+1;j++){
            if(a[i]==j){
                f[j]++;
                break;
            }
        }
    }
    for(int j=0;j<max+1;j++){
        if(f[j]!=0){
            printf("%d - %d\n",j,f[j]);
        }
        
    }
    return 0;
}
