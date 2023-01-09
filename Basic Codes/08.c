#include <stdio.h>

int main()
{
    //Days into Years, Months and Days
    int D,Y,a,b,M,c,R;
    printf("Enter the total number of Days=");
    scanf("%d", &D);
    Y=D/365;
    a=Y*365;
    b=D-a;
    M=b/30;
    c=M*30;
    R=b-c;
    printf("\nThere are %d",Y);
    printf(" Years %d",M);
    printf(" Months %d",R);
    printf(" Days in %d",D);
    printf(" days");

    

    return 0;
}
