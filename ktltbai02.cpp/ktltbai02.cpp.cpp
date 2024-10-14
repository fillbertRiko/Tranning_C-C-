//bai tap ktltbai02.cpp
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	//Khai bao bien
	unsigned int a;
	int hangChuc, hangDonVi;

	//Ten chuong trinh 
	printf("Chuong trinh nhap vao so nguyen duong co 2 chu so se in ra cach doc\n\n");

	//In ra man hinh yeu cau can nhap vao du lieu
	printf("Nhap vao gia tri cua so: ");
	scanf_s("%d", &a);

	//Tinh hang chuc va hang don vi
	hangChuc = a / 10;
	hangDonVi = a % 10;
	//Cach doc
	switch (hangChuc)
	{
		case 1:
			printf("Muoi ");
			break;
		case 2:
			printf("Hai ");
			break;
		case 3:
			printf("Ba ");
			break;
		case 4:
			printf("Bon ");
			break;
		case 5:
			printf("Nam ");
			break;
		case 6:
			printf("Sau ");
			break;
		case 7:
			printf("Bay ");
			break;
		case 8:
			printf("Tam ");
			break;
		case 9:
			printf("Chin ");
			break;
	}
	switch (hangDonVi)
	{
		case 0:
			if (hangDonVi == 0)
			{
				printf("Muoi ");
			}
			break;
		case 1:
			printf("Mot");
			break;
		case 2:
			printf("Hai");
			break;
		case 3:
			printf("Ba");
			break;
		case 4:
			printf("Bon");
			break;
		case 5:
			printf("Nam");
			break;
		case 6:
			printf("Sau");
			break;
		case 7:
			printf("Bay");
			break;
		case 8:
			printf("Tam");
			break;
		case 9:
			printf("Chin");
			break;
	}

	cout << endl;
	return 0;
}
//=====Dinh nghia ham=====

