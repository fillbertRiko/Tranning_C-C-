#include <iostream>
#include <stdio.h>

using namespace std;
//Khai bao cau truc ngay thang
struct NgayThang
{
    unsigned int ngay,thang;
    unsigned int nam;
};
//Khai bao kieu cau truc gioi tinh
enum GioiTinh {Nam,Nu};

//Khai bao kieu cau truc lop
struct Lop
{
    int khoa;
    char chuyenNganh[10];
}

//Khai bao kieu cau truc Sinh Vien
struct SinhVien
{
    char maSinhVien[21];
    char hoTen[35];
    NgayThang ngaySinh;
    GioiTinh gt;
    Lop lop;
};
int main()
{
    //Khai bao bien
    int n;
    SinhVien ds[100];
    char hoTen;
}