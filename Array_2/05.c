#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the no. of Rows and Columns:");
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m];
    printf("Matrix 1:\n");
    for(int i=0;i<n;i++){
        printf("Enter the row %d:",i+1);
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 2:\n");
    for(int i=0;i<n;i++){
        printf("Enter the row %d:",i+1);
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]!=b[i][j]){
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        printf("Matrix 1 and 2 are not equal");
    }
    else{
        printf("Matrix 1 and 2 are equal");
    }
    return 0;
}
