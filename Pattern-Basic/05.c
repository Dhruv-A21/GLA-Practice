#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=6-i;k++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
