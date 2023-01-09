#include<stdio.h>
int main()
{
    for(int i=1,k=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++,k++)
        {
            printf("%2d ",k);
        }
        printf("\n");
    }
}
