#include<stdio.h>
//Subtracting 2 matrices
int main(){
    int n;
    printf("Enter the size of square matrix:");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("MATRIX 1:-\n");
    for(int i=0;i<n;i++){
        printf("Enter the row %d:",i+1);
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("MATRIX 2:-\n");
    for(int i=0;i<n;i++){
        printf("Enter the row %d:",i+1);
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[n][n];
    printf("MATRIX 1 - MATRIX 2 :-\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%7d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
