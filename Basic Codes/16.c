#include <stdio.h>
#include <math.h>



int main()
{
    //Finding the Compound Interest
    int P,T,R;
    float a,b,C;
    printf("Enter the Principal=");
    scanf("%d",&P);
    printf("Enter the Time=");
    scanf("%d",&T);
    printf("Enter the Rate of Interest for compound=");
    scanf("%d",&R);
    
    a=(R+100)/100;
    b=pow(a,T);
    C=P*b;
    printf("Compound Interest is %f",C);
    
    
    
    

    return 0;
}
