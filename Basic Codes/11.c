#include <stdio.h>
#include <math.h>

int main()
{
    //Finding the 3rd angle
    float x,y,z;
    printf("Enter the value of First angle x=");
    scanf("%f",&x);
    printf("Enter the value of Second angle y=");
    scanf("%f",&y);
    
    z=180-(x+y);
    printf("\nSo Third angle z= %f",z);
    
    

    return 0;
}
