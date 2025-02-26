/*
Đề bài: Viết chương trình quản lý sinh viên trong C/C++. Mỗi đối tượng sinh viên có các thuộc tính sau: id, tên, giới tính, tuổi, điểm toán, điểm lý, điểm hóa, điểm trung bình và học lực.

Id là mã sinh viên tự động tăng.

Khi khởi tạo, chương trình sẽ đọc file "student.txt" để lấy ra danh sách sinh viên đã được lưu trước đó.

Điểm trung bình là giá trị trung bình của 3 môn toán, lý và hóa.

Học lực được tính như sau:

Giỏi: nếu điểm trung bình lớn hơn hoặc bằng 8.
Khá: nếu điểm trung bình nhỏ hơn 8 và lớn hơn hoặc bằng 6.5.
Trung Bình: nếu điểm trung bình nhỏ hơn 6.5 và lớn hơn hoặc bằng 5.
Yếu: nếu điểm trung bình nhỏ hơn 5.
Yêu cầu: tạo ra một menu với các chức năng sau:

1. Thêm sinh viên.
2. Cập nhật thông tin sinh viên bởi ID.
3. Xóa sinh viên bởi ID.
4. Tìm kiếm sinh viên theo tên.
5. Sắp xếp sinh viên theo điểm trung bình (GPA).
6. Sắp xếp sinh viên theo tên.
7. Hiển thị danh sách sinh vien.
8. Ghi danh sách sinh viên vào file "student.txt" .
*/

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <conio.h>
using namespace std;

#define N 100

//id, tên, giới tính, tuổi, điểm toán, điểm lý, điểm hóa, điểm trung bình và học lực.
struct SinhVien
{
	int ID;
	char hoTen[25];
	char gioiTinh[5];
	int tuoi;
	float diemToan;
	float diemLy;
	float diemHoa;
	float diemTBC = 0;
	char hocLuc[8];
};

struct hoTen
{
	char ten[20];
};

int idLonNhat(SinhVien a[], int n);
void nhapThongTinSinhVien(SinhVien& sv, int ID);
void nhapSinhVien(SinhVien a[], int ID, int n);
void capNhatThongTinSinhVien(SinhVien& sv);
void capNhatSinhVien(SinhVien a[], int ID, int n);
int xoaTheoID(SinhVien a[], int ID, int n);
void timKiemTheoTen(SinhVien a[], char ten[], int n);
void tinhDTB(SinhVien& sv);
void xepLoai(SinhVien& sv);
void sapXepTheoDTB(SinhVien a[], int n);
void sapXepTheoTen(SinhVien a[], int n);
void hienThiSinhVien(SinhVien a[], int n);
int docFile(SinhVien a[], char fileName[]);
void ghiFile(SinhVien a[], int n, char fileName[]);
void pressAnyKey();

int main()
{
	//khai bao bien
	int key;
	SinhVien arrFound[N];

	//doc tep
	ifstream fin("sinhvien.txt");
	ofstream fout("bangsinhvien.txt");

	//tao menu
	while (true)
	{
		cout << "CHUONG TRINH QUAN LY SINH VIEN HVNNVN" << endl;
		cout << "=====================================" << endl;
		cout << "==================MENU===============" << endl;
		cout << "1.Them Sinh Vien" << endl;
		cout << "2. Cap nhat thong tin sinh vin boi ID" << endl;
		cout << "3. Tim kiem sinh vien theo ten" << endl;
		cout << "4. Sap xep sinh vien theo diem trung binh (GPA)" << endl;
		cout << "5. Sap xep sinh vien theo ten" << endl;
		cout << "6. Xoa sinh vien theo ten" << endl;
		cout << "7. Hien thi danh sach sinh vien" << endl;
		cout << "8. Ghi danh sach sinh vien vao file 'bangsinhvien.txt'" << endl;
		cout << "0. Thoat" << endl;
		cout << "======================================" << endl;
		cin >> key;
		switch (key) {
		case 1:
			cout << "Them Sinh Vien" << endl;

			break;
		case 2:	
			cout << "Cap nhat thong tin sinh vien boi ID" << endl;

			break;
		case 3:
			cout << "Tim kiem sinh vien theo ten" << endl;

			break;
		case 4:
			cout << "Sap xep sinh vien theo diem trung binh (GPA)" << endl;

			break;
		case 5:
			cout << "Sap xep sinh vien theo ten" << endl;

			break;
		case 6:
			cout << "Xoa sinh vien theo ten" << endl;

			break;
		case 7:
			cout << "Hien thi danh sach sinh vien" << endl;

			break;
		case 8:
			cout <<"Ghi danh sach sinh vien vao file 'sinhvien.txt'" << endl;

			break;
		case 0:
			cout << "Ban da chon thoat chuong trinh" << endl;
			return 0;
		default:
			cout << "Khong co chuc nang nay" << endl;
			cout << "Hay chon chuc nang trong menu" << endl;

			break;
		}
	}

	fclose;
	cout << endl;
	return 0;
}

int idLonNhat(SinhVien a[], int n)
{
	int IDMax = 0;
	if (n > 0)
	{
		IDMax = a[0].ID;
		for (int i = 0; i < IDMax; i++)
		{
			if (a[i].ID > IDMax)
			{
				IDMax = a[i].ID;
			}
		}
	}
}
void nhapThongTinSinhVien(SinhVien& sv, int ID)
{
	cout << "\nNhap ten: ";			cin >> sv.hoTen;
	cout << "\nNhap gioi tinh: ";	cin >> sv.gioiTinh;
	cout << "\nNhap Diem toan: ";	cin >> sv.diemToan;
	cout << "\nNhap Diem ly: ";		cin >> sv.diemLy;
	cout << "\nNhap Diem hoa: ";	cin >> sv.diemHoa;
	sv.ID = ID;
	tinhDTB(sv);
	xepLoai(sv);
}
void nhapSinhVien(SinhVien a[], int ID, int n)
{
	cout << "Nhap sinh vien thu: " << n + 1 << endl;
	nhapThongTinSinhVien(a[n], ID);
}
void capNhatThongTinSinhVien(SinhVien& sv)
{
	cout << "\nNhap ten: ";			cin >> sv.hoTen;
	cout << "\nNhap gioi tinh: ";	cin >> sv.gioiTinh;
	cout << "\nNhap Diem toan: ";	cin >> sv.diemToan;
	cout << "\nNhap Diem ly: ";		cin >> sv.diemLy;
	cout << "\nNhap Diem hoa: ";	cin >> sv.diemHoa;
	tinhDTB(sv);
	xepLoai(sv);
}
void capNhatSinhVien(SinhVien a[], int ID, int n)
{
	int found = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].ID == ID)
		{
			found = 1;
			cout << "Cap nhat thong tin sinh vien co ID: " << ID;
			capNhatThongTinSinhVien(a[i]);
			break;
		}
	}
	if (found == 0)
	{
		cout << "Sinh vien khong ton tai trong csdl" << endl;
	}
}
int xoaTheoID(SinhVien a[], int ID, int n)
{
	int found = 0;
	for (int i = 0; i < n; i++)
	{
		found = 1;
		for (int j = i; j < n; j++)
		{
			a[j] = a[j + 1];		//thao tac day o nho len tiep theo
		}
		cout << "Da xoa thong tin sinh vien theo ma ID " << ID << endl;
		break;
	}
	if (found == 0)
	{
		cout << "Sinh vien theo ID khong ton tai trong csdl";
		return 0;
	}
	else {
		return 1;
	}
}
void timKiemTheoTen(SinhVien a[], char ten[], int n)
{
	SinhVien arrFound[N];
	char tenSinhVien[30];
	int found = 0;
	for (int i = 0; i < n; i++)
	{
		strcpy(tenSinhVien, a[i].hoTen);
		if (strstr(strupr(tenSinhVien), strupr(ten)))
		{
			arrFound[found] = a[i];
			found++;
		}
	}

	hienThiSinhVien(arrFound, found);
}
void tinhDTB(SinhVien& sv)
{
	sv.diemTBC = (sv.diemHoa + sv.diemLy + sv.diemToan) / 3;
}
void xepLoai(SinhVien& sv)
{

}
void sapXepTheoDTB(SinhVien a[], int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[i].diemTBC < a[j].diemTBC)
			{
				temp = a[j].diemTBC;
				a[j].diemTBC = a[i].diemTBC;
				a[i].diemTBC = temp;
			}
		}
	}
}
void sapXepTheoTen(SinhVien a[], int n)
{

}
void hienThiSinhVien(SinhVien a[], int n)
{

}
int docFile(SinhVien a[], char fileName[])
{

}
void ghiFile(SinhVien a[], int n, char fileName[])
{

}
void pressAnyKey()
{

}