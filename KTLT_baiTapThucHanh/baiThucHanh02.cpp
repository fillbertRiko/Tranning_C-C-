//
//
//
//
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    //khai bao bien
    unsigned int n,hangChuc,hangDonVi;

    //Thong bao ten chuong trinh va yeu cau nhap vao fu lieu
    printf("Chuong trinh chuyen so nguyen duong co 2 chu so ra cach doc cua no\n\n");
    printf("Nhap vao gia tri cua so nguyen duong n: ");
    scanf("%u",&n);

    //Thuc hien chuyen doi so sang cach doc
    hangChuc = n/10;
    hangDonVi = n%10;
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
    cout<<endl;
    return 0;
}