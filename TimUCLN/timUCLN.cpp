#include <stdio.h>
#include <iostream>

int main()
{
    //thong tin yeu cau
    printf("Chuong trinh tim ra UCLN cua 2 so a va b\n\n");

    //khai bao bien
    unsigned int a,b;

    //In ra man hinh yeu cau bai toan
    printf("Nhap vao 2 so a va b: \n");
    scanf("%u %u", &a,&b);

    //thuc hien chuong trinh
    int r=a%b;
    while(r)
    {
        a=b;
        b=r;
        r=a%b;
    }

    //Ket qua chuong trinh
    printf("UCLN cua 2 so a va b la: %u\n",b);

    return 0;
}