#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i||i==5){
            printf("* ");
            continue;
            }
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
