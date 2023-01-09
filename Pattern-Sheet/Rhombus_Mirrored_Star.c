#include<stdio.h>
int main(){
    for(int i=5;i>=1;i--){
        for(int j=5;j>i;j--){
            printf("  ");
        }
        for(int k=1;k<=5;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
