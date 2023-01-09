#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1,k=0;j<=i;j++,k=k+(6-j))
        {
            printf("%d ",i+k);
        }
        printf("\n");
    }
}
