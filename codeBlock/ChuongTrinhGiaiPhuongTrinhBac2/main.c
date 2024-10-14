#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    float x1,x2,x;

    printf("Chuong trinh giai phuong trinh bac 2\n\n");
    printf("Enter a,b,c: \n\n");
    scanf("%d%d%d",&a,&b,&c);

    //make the delta
    d = delta(a,b,c);
    if(d>0)
    {
        x1 = (float)(-b + sqrt(d))/(2*a);
        x2 = (float)(-b - sqrt(d))/(2*a);
        printf("Have 2 result different x1 and x2: \n");
        printf("x1 = %0.2f\nx2 = %0.2f",x1,x2);
    }else if(d==0)
    {
        x = (float)-b/(2*a);
        printf("Have 1 result x: \n");
        printf("x = %0.2f",x);
    }else
    {
        printf("Don't have any result");
    }
    return 0;
}

int delta(int num1,int num2, int num3)
{

    return num2*num2 - 4*num1*num3;
}
