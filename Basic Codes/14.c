#include <stdio.h>



int main()
{
    //Finding Total,Average and Percentage of 5 subjects
    int a,b,c,d,e;
    float T,A,P;
    printf("\nEnter the marks of Subject 1 out of 100 =");
    scanf("%d",&a);
    printf("\nEnter the marks of Subject 2 out of 100 =");
    scanf("%d",&b);
    printf("\nEnter the marks of Subject 3 out of 100 =");
    scanf("%d",&c);
    printf("\nEnter the marks of Subject 4 out of 100 =");
    scanf("%d",&d);
    printf("\nEnter the marks of Subject 5 out of 100 =");
    scanf("%d",&e);
    T=a+b+c+d+e;
    A=T/5;
    P=T/5;
    printf("\nToatal=%f",T);
    printf("\nAverage=%f",A);
    printf("\nPercentage=%f",P);
    
    
    
    

    return 0;
}
