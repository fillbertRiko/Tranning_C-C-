/*
Bài 01(ctdlgtbai01.cpp). Viết chương trình C/C++ cài đặt cấu trúc dữ liệu mảng có phần tử dữ liệu là số nguyên.
Sử dụng cấu trúc mảng cho bài toán cộng hai ma trận số nguyên có kích thước mxn. Viết hàm nhập vào ma trận,
hàm cộng ma trận và hàm đưa ma trận ra màn hình theo hàng, cột. Yêu cầu sử dụng biến mảng động làm cấu trúc lưu trữ.
*/
#include <iostream>
#include <stdio.h>
using namespace std;

void enterMatrix(int** arr, int m, int n);
int plusMatrix(int** arr1, int **arr2, int m, int n);
void printMatrix(int** arr, int m, int n);

int main()
{
	int m, n, i,j;

	cout << "Enter the m and n for matrix: ";
	cin >> m >> n;

	//khai bao mang dong
	int** arr1 = new int* [m];
	for (i = 0; i < m; i++)
	{
		arr1[i] = new int[n];
	}
	int** arr2 = new int* [m];
	for (i = 0; i < m; i++)
	{
		arr2[i] = new int[n];
	}

	enterMatrix(arr1, m, n);
	printMatrix(arr1, m, n);
	enterMatrix(arr2, m, n);
	printMatrix(arr2, m, n);

	plusMatrix(arr1, arr2, m, n);
	//printMatrix(plusMatrix(arr1, arr2, m, n), m, n);

	//xoa mang dong
	for (i = 0; i < m; i++)
	{
		delete[] arr1[i];
	}
	delete[]arr1;
	for (i = 0; i < m; i++)
	{
		delete[] arr2[i];
	}
	delete[]arr2;

	cout << endl;
	return 0;
}

void enterMatrix(int** arr, int m, int n)
{
	cout << "Enter the number in matrix";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ", i, j);
			cin >> arr[i][j];
		}
	}
}

int plusMatrix(int** arr1, int** arr2,int m,int n)
{
	int** arrP = new int* [m];
	for (int i = 0; i < m; i++)
	{
		arrP[i] = new int[n];
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arrP[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	return **arrP;
}

void printMatrix(int** arr, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}