#include<stdio.h>
int main()
{
    for(int i=1,k='A';i<=5;i++)
    {
        for(int j=1;j<=i;j++,k++)
        {
            printf("%c ",k);

        }
        printf("\n");
    }
}
