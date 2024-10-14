#include <stdio.h>
#include <stdlib.h>

//function check
float determinant(float num1, float num2, float num3, float num4)
{
    return num1*num4-num2*num3;
}

int main()
{
    printf("Program caculate the equations\n");
    float a1,b1,c1,a2,b2,c2;
    printf("Enter the value of num in equations:\n");
    scanf("%f%f%f%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2);

    //check the delta
    float delta, deltaX, deltaY,x,y;
    delta = determinant(a1,b1,a2,b2);
    deltaX = determinant(c1,b1,c2,b2);
    deltaY = determinant(a1,c1,a2,c2);

    if(delta != 0)
    {
        x = deltaX/delta;
        y = deltaY/delta;
        printf("Solution of equations have unique result:\n");
        printf("x = %0.4f\ny = %0.4f",x,y);
    }else
    {
        if(deltaX == 0 && deltaY == 0)
        {
            printf("The solution of equations have many result\n");
        }else
        {
            printf("The solution of equations have no result\n");
        }
    }

    return 0;
}
