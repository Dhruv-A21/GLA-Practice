#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if((i==3 && (j==2 || j==4)) || (j==3 && (i==2 || i==4))){
            printf("  ");
            continue;
            }
            printf("* ");

        }
        printf("\n");
    }
    return 0;
}
