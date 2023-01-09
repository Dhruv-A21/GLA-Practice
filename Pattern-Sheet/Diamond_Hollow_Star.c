#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=6-i;j++){
            printf("* ");
        }
        for(int k=1;k<=2*(i-1);k++){
            printf("  ");
        }
        for(int l=1;l<=6-i;l++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=5;i>=1;i--){
        for(int j=1;j<=6-i;j++){
            printf("* ");
        }
        for(int k=1;k<=2*(i-1);k++){
            printf("  ");
        }
        for(int l=1;l<=6-i;l++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
