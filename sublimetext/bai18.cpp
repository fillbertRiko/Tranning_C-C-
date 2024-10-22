/*
bai 18: Cai dat va su dung hang doi luu tru phan tan cho bai toan sau:
cho tep van ban 'sinhvien.txt' chua danh sach n sinh vien, moi sinh vien co thong tin ve ma sinh vien, ho ten, gioi tinh, diemTBC. Danh sach sinh vien tren tep da duoc sap xep theo diemTBC giam dan. Doc danh sach sinh vien tu tep, neu la sinh vien nu thi dua ra man hinh, neu la sinh vien nam thi dua vao hang doi. Dua danh sach sinh vien nam tu hang doi ra man hinh. Dua ra man hinh sinh vien nam co diem tbc cao nhat
*/
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
using namespace std;

//khai bao kieu cau truc phan tu du lieu cua hang doi
struct SinhVien
{
	char maSV[11];
	char hoTen[31];
	char gioiTinh[6];
	float diemTBC;
};

//khai bao kieu cau truc nut nho cua hang doi luu tru phan tan
struct node
{
	SinhVien infor;
	node * link;
};

//khai bao ham cai dat cac phep toan tren hang doi
void QInsert(node* &F, node* &R, SinhVien x);
SinhVien QDelete(node* &F, node* &R);
bool QIsEmpty(node* F, node* R);

int main()
{
	//cai dat cau truc luu tru phan tan cua hang doi
	node *F=NULL,*R=NULL;
	
	//khai bao tep vao
	ifstream fin("sinhvien.txt");
	
	//khai bao bien 
	int n;
	SinhVien x, svTBCmax;
	char tg[2];
	
	//doc so luong tu tep
	fin>>n;
	
	//doc danh sach n sv tu tep, neu la sv nu thi dua ra man hinh, sv nam thi dua vao hang doi
	cout<<"Danh sach sinh vien";
	cout<<"\n\nMaSV\tHoten\tGioi tinh\tDiem TBC\n";
	for(int i=0;i<n;i++)
	{
		//doc ky tu enter de dua con tro tep xuong dong duoi
		fin.getline(tg,sizeof(tg));
		
		//doc va tach thong tin cua 1 sv
		fin.getline(x.maSV,sizeof(x.maSV),'\t');
		fin.getline(x.hoTen,sizeof(x.hoTen),'\t');
		fin.getline(x.gioiTinh,sizeof(x.gioiTinh),'\t');
		fin>>x.diemTBC;
		
		//dua sv nu ra man hinh, sv nam vao hang doi
		if(strcasecmp(x.gioiTinh,"Nam")==0) QInsert(F,R,x);
		else cout<<x.maSV<<'\t'<<x.hoTen<<'\t'<<x.gioiTinh<<'\t'<<x.diemTBC<<endl;
	}
	
	//lay sv nam co diem TBC cao nhat o dau hang doi
	x=svTBCmax=QDelete(F,R);
	
	//dua dnah sach sv nam tu hang doi ra man hinh
	cout<<x.maSV<<'\t'<<x.hoTen<<'\t'<<x.gioiTinh<<'\t'<<x.diemTBC<<endl;
	
	while(!QIsEmpty(F,R))
	{
		x = QDelete(F,R);
		cout<<x.maSV<<'\t'<<x.hoTen<<'\t'<<x.gioiTinh<<'\t'<<x.diemTBC<<endl;
	}
	
	cout<<"\nSinh vien nam co diem tbc cao nhat la:";
	cout<<"\nMa sinh vien: "<<svTBCmax.maSV;
	cout<<"\nHo ten sinh vien: "<<svTBCmax.hoTen;
	cout<<"\nGioi tinh sinh vien: "<<svTBCmax.gioiTinh;
	cout<<"\nDiem tbc sinh vien: "<<svTBCmax.diemTBC;
	
	cout<<endl;
	return 0;
}

void QInsert(node* &F, node* &R, SinhVien x)
{
	//tao nut moi chua x
	node *N = new node;
	N->infor = x;
	N->link = NULL;
	
	//noi nut moi vao sau nut R
	if(R==NULL) F=N;
	else R->link = N;
	
	//cho R tro sang nut moi
	R=N;
}

SinhVien QDelete(node* &F, node* &R)
{
	SinhVien temp;
	//kiem tra hang doi rong
	if(F==NULL)
	{
		cout<<"Hang doi da rong!";
		return temp;
	}
	
	//giu lai nut dau hang doi(loi truoc)
	temp = F->infor;
	node *P=F;
	
	//cho F tro sang nut dung sau
	if((F==R) F=R=NULL;
	else F=F->link;
	
	//huy nut va tra ve phan tu da loai bo
	delete P;
	return temp;
}

bool QIsEmpty(node* F, node* R)
{
	return F==NULL;
}