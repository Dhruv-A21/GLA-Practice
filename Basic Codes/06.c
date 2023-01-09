#include <stdio.h>

int main()
{
    //Converting Celsius and Fahrenheit
    int C;
    float a,F;
    printf("Enter the temperature in Celsius=");
    scanf("%d",&C);
    a=9*C/5;
    F=a+32;
    printf("\nTemperature in Fahrenheit %f",F);
    

    return 0;
}
