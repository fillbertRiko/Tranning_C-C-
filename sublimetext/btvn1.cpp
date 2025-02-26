/*
Bài 01(ctdlgtbai01.cpp). Viết chương trình C/C++ cài đặt cấu trúc dữ liệu mảng có phần tử dữ liệu là số nguyên.
Sử dụng cấu trúc mảng cho bài toán cộng hai ma trận số nguyên có kích thước mxn. Viết hàm nhập vào ma trận,
hàm cộng ma trận và hàm đưa ma trận ra màn hình theo hàng, cột. Yêu cầu sử dụng biến mảng động làm cấu trúc lưu trữ.
*/
#include <iostream>
#include <stdio.h>
using namespace std;

class matrix{
	int **p;
	int d1, d2;
	
	public:
		matrix(int x, int y);
		void get_element(int i, int j, int value)
		{
			p[i][j] = value;
		}
		
		int &put_element(int i, int j)
		{
			return p[i][j];
		}
};

matrix::matrix(int x, int y)
{
	d1 = x;
	d2 = y;
	p = new int *[d1];
	for(int i=0;i<d1;i++)
	{
		p[i] = new int[d2];
	}
}

int main()
{
	int m,n;
	int i,j,value;
	
	cout << "The length of array is: " << endl;
	cin >> m >> n;
	
	matrix A(m,n);
	
	cout << "Enter matrix element row by row\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> value;
			A.get_element(i,j,value);
		}
		cout << "\n";
	}
	
	cout << endl;
	return 0;
}
