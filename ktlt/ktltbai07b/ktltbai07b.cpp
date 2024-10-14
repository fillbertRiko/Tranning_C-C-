<<<<<<< HEAD
//Ho va Ten: Dang Duong Huy
//Lop: K68CNTTD
//MSSV: 681155
//De: 07b
/*
Bai07b: Cho day so nguyen a1, a2, ..., an. Chen them phan tu thu k(1<=k<n) trong day so
*/
=======
//Ho va ten: Dang Duong Huy
//Lop: K68CNTTD
//MSSV: 681155
//De: ktltbai07b
/*
Cho day so nguyen a1,a2,...,an. Chen them phan tu x vao vi tri thu k(1<=k<n) trong day so. Dua ra day so ban dau va va day so sau khi chen
*/

>>>>>>> e6460ac3a2c42886b89e1523a98077a6a741bec6
#include <iostream>
#include <stdio.h>

using namespace std;

<<<<<<< HEAD
int main()
{
    //khai bao bien
    unsigned int n,k,x,i;
    int a[100];

    //In ra man hinh tieu de va yeu cau cua chuong trinh
    printf("Chuong trinh xoa di phan tu thu k trong day so\n\n");
    printf("Nhap vao gia tri cua n: ");
    scanf("%u",&n);

    //Nhap vao gia tri ban dau cua day so
    printf("Nhap vao gia tri cua tu phan tu trong day so\n");
    for(i=0;i<n;i++)
    {
        printf("a[%u] = ",i);
        scanf("%u",&a[i]);
    }

    //In ra day so ban dau
    printf("Day so ban dau co dang: \n");
    for(i=0;i<n;i++) printf("%u ",a[i]);

    //Chen them phan tu vao trong day
    do
    {
        printf("\nNhap vao phan tu thu k: ");
        scanf("%u",&k);

        if(k<0||k>100) printf("Phan tu thu k vuot qua gia tri bo nho duoc cap phat, xin moi nhap lai!!!");
    } while (k<0||k>100);
    for(i=n;i>k-1;i--) a[i]=a[i-1];
    a[k-1] = x;
    n++;

    //In ra day so da duoc chen them
    printf("Day so sau khi da chen them phan tu thu %u la: \n",k);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    
    cout<<endl;
    return 0;
}
=======
//=====Chuong trinh chinh=====
int main()
{
	//khai bao bien
	int n, k, i,giaTri;
	int a[100];

	//In ra man hinh ten chuong trinh va yeu cau bai toan
	printf("Chuong trinh chen them phan tu thu k vao trong day so\n\n");
	printf("Nhap vao so luong phan tu trong day: ");
	scanf_s("%d", &n);

	//Nhap vao gia tri va in ra day so ban dau
	printf("Hay nhap vao gia tri cac phan tu trong day\n");
	for (i = 0; i < n; i++)
	{
		printf("a%d = ", i + 1);
		scanf_s("%d", &a[i]);
	}
	printf("Day so ban dau nhu sau:\n");
	for (i = 0; i < n; i++) printf("%d ", a[i]);

	//Nhap vao vi tri can chen
	do
	{
		printf("\nNhap vao vi tri can chen vao day: ");
		scanf_s("%d", &k);

		if (k<0 || k>n) printf("vi tri ban nhap phai nam trong khoang [1,%d], xin moi nhap lai!!!", n);
	} while (k<0||k>n);
	//Nhap vao gia tri can chen
	printf("Nhap vao gia tri can chen: ");
	scanf_s("%d", &giaTri);
	//Thuc hien chen vao day so
	for (i = n; i > k - 1; i--) a[i] = a[i - 1];

	//Dua giaTri vao vi tri k
	a[k - 1] = giaTri;

	//tang n len +1
	n++;

	//In ra ket qua
	printf("Day so sau khi chen them la: \n");
	for (i = 0; i < n; i++) printf("%d ", a[i]);

	cout << endl;
	return 0;
}
//=====Dinh nghia ham==========

>>>>>>> e6460ac3a2c42886b89e1523a98077a6a741bec6
