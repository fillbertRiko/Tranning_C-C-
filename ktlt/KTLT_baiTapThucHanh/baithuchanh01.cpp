//Ho va Ten: Dang Duong Huy
//Lop: K68CNTTD
//MSSV: 681155
//De: 01
/*
Bai1: Giai he phuong trinh bac nhat
a1x + b1y = c1
a2x + b2y = c2
*/
#include <iostream>
#include <stdio.h>

using namespace std;

//=====Chuong trinh chinh=====
int main()
{
    //khai bao bien
    float a1,a2,b1,b2,c1,c2,x,y,tg;

    //Thong bao ten chuong trinh va yeu cau nhap
    printf("Chuong trinh giai he phuong trinh bac 1\n\n");
    printf("Nhap vao cac he so cua he phuong trinh:\na1,b1,c1\na2,b2,c2\n");
    scanf("%f%f%f%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2);

    //Kiem tra dieu kien de co he phuong trinh va giai ra nghiem
    if((a1/a2)!=(b1/b2))
    {
        x = c1*b2 - c2*b1;
        y = a1*c2 - a2*c1;
        tg = a1*b2 - a2*b1;
        printf("He cos nghiem duy nhat la: \nx = %f\ny = %f",x/tg,y/tg);
    }else if((a1*b2)==(a2*b1)&&(c1*b2)!=(c2*b1))
    {
        printf("He phuong trinh vo nghiem");
    }else
    {
        printf("He phuong trinh co vo so nghiem");
    }
    cout<<endl;
    return 0;
}
//=====Dinh nghia ham=====

