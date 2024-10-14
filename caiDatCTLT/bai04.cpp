/*
bai 04: Cho ma trận số nguyên kích thước mxn chứa trong tệp văn bản 'matran.txt'. Đọc từ tệp vào mảng động. Đưa ra ma trận từ mảng ra màn hình theo định dạng hàng, cột. Tính tổng và trung bình cộng các phần tử của ma trận
*/
#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

//khai bao ham cai dat cac phep toan tren mang 2 chieu
void duaRaMT( int *V, int m, int n);
int tinhTong(int *V, int m, int n);
float tinhTBC(int *V, int m, int n);

int main()
{
    //khai bao tep doc vao
    ifstream fin("matran.txt");

    //cai dat cau truc luu tru mang 2 chieu
    int m,n;

    fin>>m>>n;

    int *V = new int[m*n];

    //doc ma tran tu tep vao mang 2 chieu V
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            //tinh chi so o nho k chua phan tu ij
            int k = (i-1)*n+j-1;

            //doc phan tu ij tu tep vao o nho cua vecto luu tru V
            fin>>V[k];
        }
    }

    cout<<"Chuong trinh tinh tong va tbc cac phan tu cua ma tran nguyen";
    cout<<"\n\nMa tran doc tu tep la:\n";
    duaRaMT(V,m,n);

    printf("\nTong cac phan tu cua ma tran la: %d",tinhTong(V,m,n));
    printf("\nTrung binh cong cac phan tu cua ma tran la: %0.1f",tinhTBC(V,m,n));

    cout<<endl;
    return 0;
}
//dinh nghia ham
void duaRaMT(int *V, int m, int n)
{
    for(int i=1;i<=m;i++)
    {
        //Dua ra hang i
        for(int j=1;j<=n;j++)
        {
            //Tinh chi so o nho k cua phan tu ij
            int k = (i-1)*n +j-1;

            //Dua ra phan tu ij
            printf("%6d", V[k]);
        }

        //Xuong dong
        cout<<endl;
    }
}

int tinhTong(int *V, int m, int n)
{
    int tong=0;

    //Tinh tong
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            //tinh chi so o nho k cua phan tu ij
            int k = (i-1)*n +j-1;

            //cong phan tu ij vao tong
            tong += V[k];
        }
    }

    return tong;
}

float tinhTBC(int *V, int m, int n)
{
    float tong =0;

    //Tinh tong
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            //tinh chi so o nho k cua phan tu ij
            int k = (i-1)*n +j-1;

            //cong phan tu ij vao tong
            tong += V[k];
        }
    }

    return tong/(m*n);
}