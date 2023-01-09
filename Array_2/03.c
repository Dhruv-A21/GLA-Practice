#include<stdio.h>
//
int main(){
    int n;
    printf("Enter the size of square matrix:");
    scanf("%d",&n);
    int a[n][n];
    printf("MATRIX :-\n");
    for(int i=0;i<n;i++){
        printf("Enter the row %d:",i+1);
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int k;
    printf("Enter the Integer:");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%7d",k*a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
