<<<<<<< HEAD
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    //Khai bao
    unsigned int n;

    //In ra man hinh yeu cau 
    printf("Chuong trinh sap xep day so nguyen dang so le dung dau so chan dung cuoi");
    printf("\n\nNhap vao so n: \n");
    scanf("%u",&n);

    int a[n];

    //Nhap vao day so trong mang
    for(int i=0;i<=n;i++)
    {
        printf("a[%u] = ",i);
        scanf("%u",&a[i]);
    }

    printf("\n\nDay so ban dau la: \n");
    for(int i=0;i<=n;i++) printf("%u ",a[i]);

    //sap xep thu tu cac gia tri trong mang
    for(int i=0;i<=n;i++)
    {
        if(i%2==1)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%u ",a[j]);
            }
        }else{
            for(int k=0;k<=i;k++) printf("%u ",a[k]);
        }
    }
    cout<<endl;
    return 0;
}
=======
﻿//Ho va ten: Dang Duong Huy
//Lop: K68CNTTD
//MSSV: 681155
//De: bai 06
//Sắp xếp chuỗi số từ a1, a2, a3, ..., an. Sắp xếp các số chẵn về cuối dãy, các số lẻ về đầu dãy

#include <stdio.h>
#include <iostream>

using namespace std;

//=====Chuong trinh chinh=====
int main()
{
	//Khai bao bien
	int i, n, soChan, soLe;
	int a[100];

	//Ten chuong trinh va yeu cau nhap vao 
	printf("Chuong trinh sap xep day so voi so le ve dau day, so chan ve cuoi day\n\n");
	printf("Nhap vao so luong so trong day: ");
	scanf_s("%d", &n);

	//In ra day so ban dau
	for (i = 0; i < n; i++) scanf_s("%d", &a[i]);
	printf("Day so ban nhap la: \n");
	for (i = 0; i < n; i++) printf("%d ", i);

	//Thuc hien sap xep day so
	soChan = n - 1;
	soLe = 0;
	for (; soLe < soChan;)
	{
		while (soLe < soChan && a[soLe] % 2 != 0)
		{
			soLe++;
		}
		while (soLe < soChan && a[soChan] % 2 == 0)
		{
			soChan--;
		}
		if (soLe < soChan)
		{
			int tg = a[soLe];
			a[soLe] = a[soChan];
			a[soChan] = tg;
		}
	}

	//Dua ra ket qua 
	printf("Day so sau khi sap xep la:\n");
	for (i = 0; i < n; i++) printf("%d ", a[i]);

	cout << endl;
	return 0;
}
//=====Dinh nghia ham=========

>>>>>>> e6460ac3a2c42886b89e1523a98077a6a741bec6
