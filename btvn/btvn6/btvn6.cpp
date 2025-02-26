/*
Bài 06(ctdlgtbai06.cpp). Viết chương trình C/C++ cài đặt cấu trúc dữ liệu hàng đợi sử dụng
cấu trúc lưu trữ kế tiếp theo kiểu quay vòng. Sử dụng hàng đợi cho bài toán: Có một tệp danh sách sinh viên,
mỗi sinh viên có thông tin gồm mã sv, họ tên, giới tính, điểm tbc. Danh sách sinh viên trên tệp đã được sắp xếp theo
điểm tbc giảm dần. Ghi lại tệp sao cho tất cả sinh viên nữ ở đầu danh sách, tất cả sinh viên nam ở cuối danh sách,
điểm tbc vẫn giảm dần trong nhóm nam và nữ.
*/
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define N 128

struct SinhVien
{
	char MSSV[10];
	char hoTen[25];
	char gioiTinh[6];
	float diem;
};

void CQInsert(SinhVien * Q, int& F, int& R, SinhVien x);
SinhVien CQDelete(SinhVien* Q, int& F, int& R);
bool CQIsEmpty(SinhVien* Q, int F, int R);

int main()
{
	SinhVien Q[N];
	int F = -1, R = -1;

	//khai bao tep vao ra
	ifstream fin("sinhvien.txt");
	ofstream fout("sinhvien.txt");

	//khai bao bien
	int n;
	SinhVien x;
	char temp[2];

	cout << "Chuong trinh doc sinh vien tu tep" << endl;

	//doc so luong sih vien tu tep
	fin >> n;

	//Ghi so luong sinh vien ra tep moi
	fout << n << endl;

	//doc sinh vien tu tep
	for (int i = 0; i < n; i++)
	{
		//doc qua enter de dua con tro xuong duoi
		fin.getline(temp, sizeof(temp));

		//doc va tach thong tin cua sinh vien thu i vao cau truc x
		fin.getline(x.MSSV, sizeof(x.MSSV),'\t');
		fin.getline(x.hoTen, sizeof(x.hoTen), '\t');
		fin.getline(x.gioiTinh, sizeof(x.gioiTinh), '\t');
		fin >> x.diem;

		//neu sinh vien la nu thi dua ra truoc, sinh vien la nam thi day vao hang doi
		if (strcasecmp((x.gioiTinh), "Nam") == 0)	CQInsert(Q, F, R, x);
		else	fout << x.MSSV << '\t' << x.hoTen << '\t' << x.diem;

	}

	//lay sinh vien nam tu hang doi ra
	while (!CQIsEmpty(Q, R, F))
	{
		x = CQDelete(Q, F, R);
		fout << x.MSSV << '\t' << x.hoTen << '\t' << x.diem << endl;
	}
	
	cout << endl;
	return 0;
}

void CQInsert(SinhVien* Q, int& F, int& R, SinhVien x)
{
	if (R + 1 == F)
	{
		cout << "Hang doi day!";
		return;
	}

	if (F == R == 0)
	{
		F = R = 1;
	}
	else if (R == 0)
	{
		R = 1;
	}
	else {
		R += 1;
	}

	Q[R] = x;
}

SinhVien CQDelete(SinhVien* Q, int& F, int& R)
{
	SinhVien x;
	if (F == -1)
	{
		cout << "Hang doi rong!";
		return x;
	}

	x = Q[F];
	if (F == R)
	{
		F = R = -1;
	}
	else if(F==N-1)
	{
		F = 0;
	}
	else {
		F++;
	}

	return x;
}

bool CQIsEmpty(SinhVien* Q, int F, int R)
{
	return F == -1;
}