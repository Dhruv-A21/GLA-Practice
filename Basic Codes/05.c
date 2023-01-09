#include <stdio.h>

int main()
{
    //Converting cm into m and km
    int c;
    float m,k;
    printf("Enter the value of Length in cm c=");
    scanf("%d",&c);
    m=c/100;
    k=c/100000;
    
    printf("\nLength in meters %f m",m);
    printf("\nLength in kilometers %f km",k);
    

    return 0;
}
