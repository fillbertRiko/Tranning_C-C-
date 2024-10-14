//Ho va ten: Dang Duong Huy
//Lop: K68CNTTD
//MSSV: 681155
//De: b1
/*
Giai he phuong trinh bac nhat
a1x * b1y = c1
a2x * b2y = c2
*/
#include <iostream>
#include <stdio.h>

using namespace std;

//=====Chuong trinh chinh=====
int main()
{
	//khai bao bien
	float a1, a2, b1, b2, c1, c2, x, y;

	//Ten chuong trinh va yeu cau nhap vao
	printf("Chuong trinh giai he phuong trinh bac nhat\n\n");
	printf("Nhap vao gia tri cua cac he so: \n");
	scanf_s("%f%f%f%f%f%f", &a1, &a2, &b1, &b2, &c1, &c2);

	//Thuc hien giai he phuong trinh voi gia tri da nhap						
	if ((a1 / a2) != (b1 / b2))
	{
		x = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
		y = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);
	}
	else if (((a1 / a2) == (b1 / b2)) != (c1 / c2))
	{
		printf("He phuong trinh vo nghiem");
	}
	else
	{
		printf("He phuong trinh co vo so nghiem");
	}

	//In ra ket qua
	printf("Nghiem cua he phuong trinh tren la: \n");
	printf("x = %0.4f\ny = %0.4f", x, y);

	cout << endl;
	return 0;
}
//=====Dinh nghia ham=====

