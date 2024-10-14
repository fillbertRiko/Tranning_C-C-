#include <stdio.h>
#include<math.h>
#include<iostream>

int main()
{
	int a, b, c;
	double h, cv, dt;
	printf("Nhap vao 3 canh a, b, c: \n");
	scanf_s("%d %d %d", &a, &b, &c);

	h = (b * c) / a;

	if (a + b > c && a + c > b && b + c > a)
	{
		cv = a + b + c;
		dt = (a * h) / 2;
		printf("Chu vi và dien tich tam giac la: %0.2f, %0.2lf\n", cv, dt);
	}
	else {
		printf("Ba canh tren khong tao thanh mot tam giac.\n");
	}

	std::cout << std::endl;
	return 0;
}
