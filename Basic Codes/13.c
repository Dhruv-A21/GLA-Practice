#include <stdio.h>
#include <math.h>


int main()
{
    //Finding area of Eq triangle
    float x,y,z;
    printf("Enter the value of side of the triangle x=");
    scanf("%f",&x);
    y=sqrt(3);
    
    z=y*x*x/4;
    printf("\nSo Area of Triangle= %f",z);
    
    

    return 0;
}
