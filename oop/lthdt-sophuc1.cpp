#include <iostream>
#include <stdio.h>

using namespace std;

//khai bao lop so phuc
class SoPhuc
{
private:
	float a,b;
public:
	void nhap();
	void hien();
	SoPhuc cong(SoPhuc &p2);
};

int main()
{
	//tao 3 doi tuong
	SoPhuc p1,p2,tong;

	//nhap vao 2 so phuc
	cout << "Chuong trinh tinh hai so phuc\n";
	cout << "Nhap vao gia tri 2 so phuc\n";
	p1.nhap();
	p2.nhap();

	//Tinh tong 2 so phuc 
	tong = p1.cong(p2);

	//hien thi tong 2 so phuc
	tong.hien();
	return 0;
}

void SoPhuc::nhap()
{
	cin >>a>>b;
}

void SoPhuc::hien()
{
	if (b>=0)
	{
		cout << a<<" + i" << b;
	}else{
		//xu ly doi dau trong b de dua ra ngoai hien thi ma khong thay doi ham
		cout << a << " - i" << -b;
	}
}

SoPhuc SoPhuc::cong(SoPhuc &p2)
{
	SoPhuc	temp;

	//goi tu trong class so phuc de ham tinh toan
	temp.a = a +p2.a;
	temp.b = b +p2.b;

	return temp;
}