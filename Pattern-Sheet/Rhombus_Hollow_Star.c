#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf("  ");
        }
        for(int k=1;k<=5;k++){
            if((i==2||i==3||i==4)&&(k==2||k==3||k==4)){
                printf("  ");
                continue;
            }
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
