#include<stdio.h>
#include<iostream>

int main()
{
    //khai bao bien
    int n;

    //In ra man hinh yeu cau bai toan
    printf("Chuong trinh nhap vao 1 so nguyen duong va dua ra cach doc\n");
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d",&n);

    //Bat dau thu tuc 
    int hangChuc, hangDonVi;
    hangChuc = n/10;
    hangDonVi = n%10;
    printf("\nSo nguyen duong %d co dang doc la: ",n);
    switch (hangChuc)
    {
    case 1:
        printf("Muoi ");
        break;
    case 2:
        printf("Hai muoi ");
        break;
    case 3:
        printf("Ba muoi ");
        break;
    case 4:
        printf("Bon muoi ");
        break;
    case 5:
        printf("Nam muoi ");
        break;
    case 6:
        printf("Sau muoi ");
        break;
    case 7:
        printf("Bay muoi ");
        break;
    case 8:
        printf("Tam muoi ");
        break;
    case 9:
        printf("Chin muoi ");
        break;
    }
    switch (hangDonVi)
    {
    case 0:
        printf(" ");
        break;
    case 1:
        printf("mot");
        break;
    case 2:
        printf("hai");
        break;
    case 3:
        printf("ba");
        break;
    case 4:
        printf("bon");
        break;
    case 5:
        printf("nam");
        break;
    case 6:
        printf("sau");
        break;
    case 7:
        printf("bay");
        break;
    case 8:
        printf("tam");
        break;
    case 9:
        printf("chin");
        break;
    }
    
    std::cout<<std::endl;
    return 0;
}
//=====Dinh nghia ham=====

