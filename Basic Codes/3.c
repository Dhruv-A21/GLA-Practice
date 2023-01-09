#include <stdio.h>

int main()
{
    //Finding the Perimeter and Area of a rectngle
    int L,B,P,A;
    printf("Enter the value of Length L=");
    scanf("%d",&L);
    printf("\nEnter the value of Bredth B=");
    scanf("%d",&B);
    P=2*(L+B);
    A=L*B;
    printf("\nPerimeter is %d",P);
    printf("\nArea is %d",A);
    

    return 0;
}
