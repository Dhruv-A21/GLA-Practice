#include<stdio.h>
int main(){
    for(int i=5;i>=1;i--){
        for(int j=1;j<=5-i;j++){
            printf("  ");
        }
        for(int k=1;k<=(2*i)-1;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
