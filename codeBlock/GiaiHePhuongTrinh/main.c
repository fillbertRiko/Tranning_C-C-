#include <stdio.h>
#include <stdlib.h>

void enterTheNumber(float num1, float num2, float num3, float num4, float num5, float num6)
{
    printf("Enter the value of number in equation\n\n");
    scanf("%f%f%f%f%f%f", &num1,&num2,&num3,&num4,&num5,&num6);
}

float theResult(float num1, float num2, float num3, float num4, float num5, float num6)
{
    float delta;
    delta = num1* num5 - num2*num4;

    if(delta == 0)
    {
        printf("The equation have many result\n\n");
        return;
    }
    float deltaX = num3*num5-num6*num2;
    float deltaY = num1 * num3 - num4*num3;

    float x = deltaX/delta;
    float y = deltaY/delta;

    printf("The result of x and y have value is: \n");
    printf("\nx = %.4f\n", x);
    printf("\ny = %.4f\n", y);
}

int main()
{
    printf("Program arrgrument the equatrion\n\n");
    float a1,b1,c1,a2,b2,c2,x,y;

    enterTheNumber(a1,b1,c1,a2,b2,c2);
    theResult(a1,b1,c1,a2,b2,c2);

    return 0;
}
