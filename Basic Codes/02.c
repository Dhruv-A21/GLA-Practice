#include <stdio.h>

int main()
{
    //Performing all arithmetic operations
    int a,b;
    printf("\nEnter the First number=");
    scanf("%d",&a);
    printf("\nEnter the Second number=");
    scanf("%d",&b);
    //Sum
    int c;
    c=a+b;
    printf("\nSum of 2 numbers =%d",c);
    //Difference
    int d;
    d=a-b;
    printf("\nDifference of 2 numbers =%d",d);
    //Multiplication
    int e;
    e=a*b;
    printf("\nMultiple of 2 numbers =%d",e);
    //Division
    float f;
    f=a/b;
    printf("\nDivision of 2 numbers =%f",f);
    
    

    return 0;
}
