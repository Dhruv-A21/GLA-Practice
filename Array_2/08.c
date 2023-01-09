#include<stdio.h>
int main(){
    //Sum of each Row and Column of Matrix
    int n,m;
    printf("Enter the no. of Rows and Columns:");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Matrix 1:\n");
    for(int i=0;i<n;i++){
        printf("Enter the row %d:",i+1);
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Sum of Rows
    int sum=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<m;j++){
            sum=sum+a[i][j];
        }
        printf("Sum of row %d=%d\n",i+1,sum);
    }
    //Sum of Columns
    
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum=sum+a[j][i];
        }
        printf("Sum of column %d=%d\n",i+1,sum);
    }
    return 0;
}
