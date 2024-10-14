//code mau ktltbai00.cpp
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	//Khai bao bien
	float a, b, c, delta, x1, x2;

	//In ra tieu de cua bai toan
	printf("Chuong trinh tinh nghiem phuong trinh bac 2: ax^2 + bx + c =0");

	//In ra yeu cau so lieu can nhap
	printf("\n\nNhap vao gia tri cua 3 he so a, b va c: \n");
	scanf_s("%f%f%f", &a, &b, &c);

	//Tinh delta
	delta = pow(b, 2) - 4 * a * c;
	//Xet cac truong hop cua delta
	if (a == 0)
	{
		printf("\n\nHe so a = 0 nen phuong trinh khong thuc hien duoc");
	}
	else 
	{
		if (delta < 0)
		{
			printf("\n\nPhuong trinh vo nghiem");
		}
		else if (delta == 0)
		{
			x1 = x2 = -(2 * b) / a;
			printf("Phuong trinh co nghiem kep x1 va x2: %0.2f",x1);
		}
		else
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("Phuong trinh co 2 nghiem phan biet: \n");
			printf("x1 = %0.2f\nx2 = %0.2f", x1, x2);
		}
	}

	cout << endl;
	return 0;
}

//=====Dinh nghia ham=====

