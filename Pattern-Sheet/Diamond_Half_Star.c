#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=4;i++){
        for(int k=4;k>=i;k--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
