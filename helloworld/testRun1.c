#include "stdio.h"
#include "math.h"

void main()
{
    float r,cv,dt;
    printf("\nBan kinh r = ");
    scanf("%f",&r);
    cv = 2*3.14*r;
    dt = 3.14*r*r;
    printf("\nChu vi = %10.2f\nDien tich = %10.2f",cv,dt);
}