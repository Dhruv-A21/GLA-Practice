#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int k=1;k<=2*(i-1);k++){
            if(i == 5)
            printf(" ");
            else
            printf("  ");
        }
        for(int l=1;l<=6-i;l++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--){
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
