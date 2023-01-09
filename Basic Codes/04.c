#include <stdio.h>

int main()
{
    //Finding the Diameter, Circumference, Area
    int R,D;
    float C,A;
    printf("Enter the value of Radius R=");
    scanf("%d",&R);
    D=2*R;
    C=2*R*22/7;
    A=R*R*22/7;
    printf("\nDiameter is %d",D);
    printf("\nCircumference is %f",C);
    printf("\nArea is %f",A);
    

    return 0;
}
