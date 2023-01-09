#include<stdio.h>
//Deleting duplicate elements
int main(){
    int N,f[1000]={0},d[500]={0};
    printf("Enter the size of Array:");
    scanf("%d",&N);
    int a[N];
    printf("Enter the Array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int max=0;
    for(int i=0;i<N;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    max++; //f[max]={0};
    for(int i=0;i<N;i++){
        f[a[i]]++;
    }
    int dup=0;
    for(int i=0;i<max;i++){
        if(f[i]>1){
            d[dup]=i;
            dup++;
        }
    }
    int n=N;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<dup;j++){
            if(a[i]==d[j]){
                for(int k=i;k<N-1;k++){
                    a[k]=a[k+1];
                }
                N=N-1;
            }
        }
    }
    printf("New Array:");
    for(int i=0;i<N;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
