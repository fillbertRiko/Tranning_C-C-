<<<<<<< HEAD
//Ho va ten: Dang Duong Huy
//MSSV: 681155
//Lop: K68CNTTD
//De: 07
/*
Bai07: Cho day so nguyen a1, a2, ... , an. Xoa phan tu thu k (1<=k<=n) trong day so va dua ra man hinh day so ban dau va day so sau khi xoa
*/
=======
//ho va ten:Dang Duong Huy
//Lop:K68CNTTD
//MSSV:681155
//De: bai 07
/*
Cho day so nguyen a1,a2,a3,...,an. Xoa phan tu thu k(1<=k<=n) trong day so. Dua ra man hinh day so ban dau
*/

>>>>>>> e6460ac3a2c42886b89e1523a98077a6a741bec6
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
<<<<<<< HEAD
    //Khai bao bien
    unsigned int n,i,k;
    int a[100];

    //In ra man hinh yeu cau va tieu de chuong trinh
    printf("Chuong trinh xoa phan tu trong day so da dua ra\n\n");
    printf("Nhap vao so phan tu cua day so: ");
    scanf("%u",&n);

    //Thuc hien ghi vao day so nguyen
    printf("\nHay nhap cac so trong day so tu vi tri dau den vi tri %u\n",n);
    for(i=0;i<n;i++)
    {
        printf("a[%u] = ",i);
        scanf("%u",&a[i]);
    }
    //in ra man hinh day so ban dau
    printf("Day so ban dau la: \n");
    for(i=0;i<n;i++) printf("%u ",a[i]);

    //Nhap vao vi tri phan tu can xoa
    do
    {
        printf("\nNhap vao phan tu thu k can xoa: ");
        scanf("%u",&k);

        if(k>100||k<0) printf("\nVuot qua gioi han gia tri cua mang, xin moi nhap lai!!!");
    } while (k>100||k<0);
    
    //Xoa phan tu thu k
    for(i=k;i<k-1;i++) a[i]=a[i+1];
    n--;

    //Dua ra day so sau khi xoa
    printf("Day so sau khi xoa la: \n");
    for(i=0;i<n;i++) printf("%u ",a[i]);

    cout<<endl;
    return 0;
=======
	//khai bao bien
	int n, i,k;
	int a[100];

	//In ra ten chuong trinh va yeu cau nhap vao
	printf("Chuong trinh xoa phan tu thu k trong day so (1<=k<=n)");
	printf("\n\nNhap vao so luong phan tu trong day: ");
	scanf_s("%d", &n);

	//Nhap vao gia tri day so ban dau
	printf("\nNhap vao cac gia tri cua tung phan tu trong day: \n");
	for (i = 0; i < n; i++)
	{
		printf("a%d = ",i+1);
		scanf_s("%d", &a[i]);
	}

	//in ra day so ban dau
	printf("Day so ban dau la:\n");
	for (i = 0; i < n; i++) printf("%d ", a[i]);

	//Nhap vao vi tri ma ban muon xoa
	do
	{
		printf("\nNhap vao phan tu ma ban muon xoa: ");
		scanf_s("%d", &k);

		//kiem tra xem phan tu nhap vao da dung voi dieu kien chua
		if (k<1 || k>n)	printf("Gia tri ban vua nhap khong dung, xin moi nhap lai!!!");
	} while (k<1 || k>n);

	//thao tac xoa phan tu
	for (i = k - 1; i < n - 1; i++) a[i] = a[i + 1];
	n--;

	//Dua ra man hinh ket qua
	printf("Day so sau khi xoa la: \n");
	for (i = 0; i < n; i++) printf("%d ", a[i]);
	cout << endl;
	return 0;
>>>>>>> e6460ac3a2c42886b89e1523a98077a6a741bec6
}