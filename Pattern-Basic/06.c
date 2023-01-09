#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1,k=i+1;j<=i;j++,k++)
        {
            printf("%d ",k%2);
        }
        printf("\n");
    }
}
