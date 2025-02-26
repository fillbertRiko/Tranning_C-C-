/*
Bài 01(ctdlgtbai01.cpp). Viết chương trình C/C++ cài đặt cấu trúc dữ liệu mảng có phần tử dữ liệu là số nguyên.
Sử dụng cấu trúc mảng cho bài toán cộng hai ma trận số nguyên có kích thước mxn. Viết hàm nhập vào ma trận,
hàm cộng ma trận và hàm đưa ma trận ra màn hình theo hàng, cột. Yêu cầu sử dụng biến mảng động làm cấu trúc lưu trữ.
*/
#include <iostream>
#include <stdio.h>
using namespace std;

void congMT(int *arr, int length);

int main()
{
    int length;

    cout << "Enter the length of array: ";
    cin >> length;

    int *arr = new int[length];

    delete[] arr;

    cout << endl;
    return 0;
}