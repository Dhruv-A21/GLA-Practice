#include <stdio.h>
#include <math.h>

int main()
{
    //Power of x^y
    float x,y,z;
    printf("Enter the value of base x=");
    scanf("%f",&x);
    printf("\nEnter the value of exponential y=");
    scanf("%f",&y);
    z=pow(x,y);
    printf("\nSo x^y= %f",z);
    
    

    return 0;
}
