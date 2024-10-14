#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    //khai bao bien
    unsigned int n;

    //In ra man hinh ten va yeu cau cua chuong trinh
    printf("Chuong trinh tim va in ra cac so nguyen to nho hon n");
    printf("\nNhap vao so nguyen duong n: ");
    scanf("%u", &n);

    //Thuc hien thuat toan chuong trinh
    printf("\nCac so nguyen to nho hon n la: \n");
    for(int i=3;i<=n-1;i+=2)
    {
        int laSoNguyenTo = 1;
        for(int j=2;j<=(unsigned int)sqrt(n);j++)
        {
            if(i%j==0)
                laSoNguyenTo =0;
                break;
        }
        if(laSoNguyenTo)
            printf("%u ",i);
    }

    cout<<endl;
    return 0;
}