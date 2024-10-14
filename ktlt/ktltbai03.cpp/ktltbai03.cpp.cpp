//Tim va dua ra cac so nguyen to nho hon n
#include<iostream>
#include<stdio.h>

int main()
{
	//khai bao bien
	int n;

	//In ra tieu de cua chuong trinh
	printf("Chuong trinh tim va dua ra cac so nguyen to nho hon n");
	printf("\n\nNhap vao gia tri cua n: ");
	scanf_s("%d", &n);
	
	//Thiet lap dieu kien va in ra ket qua chuong trinh
	if (n < 2)
	{
		printf("n<2 nen n khong co so nguyen to nao");
	}
	else if (n == 2)
	{
		printf("So nguyen to duy nhat trong day n la: 2");
	}
	else
	{	
		printf("\nDay so nguyen to do la: \n");
		for (int i = 2; i <= n; i++)
		{
			if (n%i==0)
			{
				for (int a = 2; a <= n; a++)
				{
					printf("%d ", a);
				}
			}
			break;
		}
	}

	std::cout << std::endl;
	return 0;
}