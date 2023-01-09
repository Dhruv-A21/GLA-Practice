#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf("  ");
        }
        for(int k=1;k<=(2*i)-1;k++){
            if(k==1||k==(2*i)-1||i==5){
            printf("* ");
            continue;
            }
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
