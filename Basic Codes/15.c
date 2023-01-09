#include <stdio.h>



int main()
{
    //Finding the SI
    int P,T,R;
    float S;
    printf("Enter the Principal=");
    scanf("%d",&P);
    printf("Enter the Time=");
    scanf("%d",&T);
    printf("Enter the Rate of Interest=");
    scanf("%d",&R);
    S=P*T*R/100;
    printf("Simple Interest is %f",S);
    
    
    

    return 0;
}
