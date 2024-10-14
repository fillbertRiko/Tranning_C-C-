//Ho va ten: Dang Duong Huy
//MSSV: 681155
//Lop: K68CNTTD
//De: 10
/*
Bai10.cpp: Cho hai ma tran so nguyen A,B co m hang, n cot. Tinh tong 2 ma tran C = A+B.
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //Khai bao bien
    unsigned int m1,m2,n1,n2,i,j;

    //in ra man hinh yeu cau va thong tin cua chuong trinh
    printf("Chuong trinh tinh tong 2 ma tran A,B co m hang n cot. Tinh tong 2 ma tran C = A+B");
    printf("\n\nMa tran A\n");
    printf("Nhap vao so hang m: ");
    scanf("%u",&m1);
    printf("\nNhap vao so cot n: ");
    scanf("%u",&n1);

    int a[m1][n1];

    printf("\n\nMa tran B");
    printf("\nNhap vao so cot m: ");
    scanf("%u",&m2);
    printf("\nNhap vao so hang n: ");
    scanf("%u",&n2);

    int b[m2][n2];

    //In ra man hinh 2 ma tran ban dau
    printf("nhap vao phan tu cua ma tran A: \n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("A[%u][%u] = ",i,j);
            scanf("%u",&a[i][j]);
        }
    }
    
    printf("Nhap vao phan tu cua ma tran B: \n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("B[%u][%u] = ",i,j);
            scanf("%u",&b[i][j]);
        }
    }

    //In ra man hinh 2 ma tran ban dau co dang
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++) printf("%u ",a[i][j]);
    }
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++) printf("\n%u ",a[i][j]);
    }

    cout<<endl;
    return 0;
}