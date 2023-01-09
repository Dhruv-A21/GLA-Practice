#include <stdio.h>

int main()
{
    //Converting Celsius and Fahrenheit
    int F;
    float a,b,C;
    printf("Enter the temperature in Fahrenheit=");
    scanf("%d",&F);
    a=F-32;
    b=a*5;
    C=b/9;
    printf("\nTemperature in Fahrenheit %f",C);
    

    return 0;
}
