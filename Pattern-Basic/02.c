#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        int k='A';
        for(int j=1;j<=i;j++,k++)
        {
            printf("%c ",k);
        }
        printf("\n");
    }

    return 0;
}
