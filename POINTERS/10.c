#include <stdio.h>

int main()
{
    printf("Enter the Rows and Columns:");
    int N,M;
    scanf("%d %d",&N,&M);
    int a[N][M],b[N][M];
    printf("Enter Matrix 1:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Matrix 2:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    int (*p)[M]=a,(*q)[M]=b;
    
    printf("Matrix1 + Matrix2:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%5d ",p[i][j]+q[i][j]);
        }
        printf("\n");
    }

    return 0;
}
