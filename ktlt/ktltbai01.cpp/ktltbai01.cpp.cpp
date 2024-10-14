//bai tap ktltbai01.cpp
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	//Khai bao bien
	float a, a1, b, b1, c, c1, x, y;

	//In ra tieu de bai toan
	printf("Chuong trinh tinh he phuong trinh bac nhat 2 an x va y\n\n");

	//In ra yeu cau nhap vao bien cua bai toan
	printf("Nhap vao he so a,b va c cua phuong trinh 1: \n");
	scanf_s("%f%f%f", &a, &b, &c);
	printf("Nhap vao he so a1,b1 va c1 cua phuong trinh 2: \n");
	scanf_s("%f%f%f", &a1, &b1, &c1);

	//Chuong trinh tinh he phuong trinh
	x = (b * c1 - b1 * c) / (a * b1 - a1 * b);
	y = (c * a1 - c1 * a) / (a * b1 - a1 * b);

	//Ket qua cua bai toan
	printf("Ket qua cua he phuong trinh voi 2 nghiem x va y la: \n");
	printf("x = %0.3f\ny = %0.3f",x,y);

	cout << endl;
	return 0;
}
//=====Dinh nghia ham=====

