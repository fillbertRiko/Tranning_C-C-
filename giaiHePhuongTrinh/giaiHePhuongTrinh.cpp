#include<stdio.h>

int main()
{
	//khai bao bien a,b,c va bien x,y thuoc gia tri nao
	int a, b, c, a1, b1, c1;
	float x, y;

	//in ra man hinh yeu cau cua bai toan
	printf("Nhap vao 3 so a,b,c:\n ");
	scanf_s("%i %i %i", &a, &b, &c);
	//in ra man hinh yeu cau nhap 3 gia tri cua bai toan
	printf("\nNhap vao 3 so a1, b1, c1:\n ");
	scanf_s("%i %i %i", &a1, &b1, &c1);

	//giai he phuong trinh

	float det = a * b1 - a1 * b;

	if (det == 0)
	{
		printf("\nHe phuong trinh vo nghiem");
	}
	else {
		x = (c * b1 - c1 * b) / det;
		y = (a * c1 - a1 * c) / det;
		printf("\nHe phuong trinh co nghiem duy nhat: x= %.2f, y=%.2f", x, y);
	}
	
	return 0;

}