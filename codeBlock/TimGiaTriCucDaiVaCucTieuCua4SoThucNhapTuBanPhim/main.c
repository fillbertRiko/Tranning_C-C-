#include <stdio.h>
#include <stdlib.h>

void soSanh(float a, float b, float c, float d)
{
    float tep[4] = {a,b,c,d};
    float max,min;
    for(int i =0;i<4;i++)
    {
        max = tep[0];
        min = tep[0];
        if(tep[i]>max)
        {
            max = tep[i];
        }

        if(tep[i]<min)
        {
            min = tep[i];
        }
    }
    printf("Max = %.3f\nMin = %.3f",max,min);
}

float main()
{
    printf("Chuong trinh tim gia tri cuc dai va cuc tieu cua 4 so thuc nhap tu ban phim\n\n");
    float num1, num2, num3,num4;
    printf("Enter the num: \n");
    scanf("%f%f%f%f",&num1,&num2,&num3,&num4);

    //looking for max and min
    soSanh(num1, num2, num3, num4);
    return 0;
}


