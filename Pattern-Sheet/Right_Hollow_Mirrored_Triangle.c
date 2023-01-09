#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=5;j>i;j--){
            printf("  ");
        }

        for(int k=1;k<=i;k++){
            if(k==1||i==5||k==i){
            printf("* ");
            continue;
            }
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
