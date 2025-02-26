/*
Bài 05(ctdlgtbai05.cpp). Viết chương trình C/C++ cài đặt cấu trúc dữ liệu hàng đợi sử dụng
cấu trúc lưu trữ kế tiếp theo kiểu quay vòng. Sử dụng hàng đợi cho bài toán: Nhập vào một dãy số nguyên dương,
lưu dãy số trong biến mảng. Đưa các số lẻ lên đầu dãy số, các số chẵn xuống cuối dãy số.
*/
#include <iostream>
#include <stdio.h>
using namespace std;
#define N 32

void push(int *Q, int &F, int &R, int x);
int pop(int* Q, int& F, int& R);
bool isEmpty(int F, int R);

int main()
{
	//khai bao hang doi
	int Q[N];
	int F = -1;
	int R = -1;

	int n;
	cout << "Enter nums of array: ";
	cin >> n;
	int* arr = new int(n);

	cout << "Enter the data of array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] % 2 != 0)
		{
			push(Q, F, R, arr[i]);
		}
		else {
			push(Q, F, R, arr[i]);
		}
	}

	cout << pop(Q, F, R) << endl;

	//
	cout << endl;
	return 0;
}

void push(int* Q, int& F,int& R, int x)
{
	if ((R + 1) % N == F)
	{
		cout << "Hang doi da day!";
		return;
	}

	if (F == -1)
	{
		F = R = 0;
	}
	else {
		R = (R + 1) % N;
	}

	Q[R] = x;
}

int pop(int* Q, int& F, int& R)
{
	if(F == -1)
	{
		cout << "Hang doi rong!";
		return -1;
	}

	int x = Q[F];
	if (F == R)
	{
		F = R = -1;
	}
	else {
		F = (F + 1) % N;
	}

	return x;
}
bool isEmpty(int F, int R)
{
	return F == -1;
}