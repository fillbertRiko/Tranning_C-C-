/*bai11: Cai dat cau truc du lieu hang doi su dung cau truc luu tru ke tiep kieu quay vong. Su dung hang doi cho bai toan:
Cos mot tep danh sach sinh vien, moi sinh vien cos thong tin gom masv, ho ten, gioi tinh, diem tbc. Danh sach sinh vien tren tep da duoc sap xep theo diem tbc giam dan.
Ghi lai tep sao cho tat ca sinh vien nu o dau danh sach, tat ca sinh vien nam o cuoi danh sach, diem tbc van giam dan trong nhom nam va nu
*/
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
using namespace std;

//khai bao hang kich thuoc vector luu tru Q cua hang doi
#define N 100

//khai bao kieu phan tu du lieu cua hang doi
struct SinhVien
{
	char maSV[10];
	char hoTen[41];
	char gioiTinh[5];
	float diemTBC;
};

//khai bao ham cai dat cac phep toan tren hang doi
void CQInsert(SinhVien *Q, int &F, int &R, SinhVien x);
SinhVien CQDelete(SinhVien *Q, int &F, int &R);
bool CQIsEmpty(const SinhVien *Q, int F, int R);

int main()
{
	//cai dat cau truc luu tru ke tiep cua hang doi
	SinhVien Q[N];
	int F=-1,R=-1;
	
	//khai bao tep vao radix
	ifstream fin("sinhvien.txt");
	ofstream fout("sinhvien2.txt");
	
	//khai bao bien
	int n;
	SinhVien x;
	char temp[2];
	
	cout<<"\nChuong trinh doc tep sinhvien.txt, ghi lai thanh sinhvien2.txt\n";
	
	//doc so luong sinh vien tu tep
	fin>>n;
	
	//ghi so luong ra tep moi
	fout<<n<<endl;
	
	//doc n sinh vien tu tep
	for(int i=0;i<;i++)
	{
		//doc qua enter de dua con tro tep xuong dong duoi
		fin.getline(temp,sizeof(temp));
		
		//doc va tach cac thong tin cua sinh vien thu i dua vao bien cau truc x
		fin.getline(x.maSV,sizeof(x.maSV),'\t');
		fin.getline(x.hoTen,sizeof(x.hoTen),'\t');
		fin.getline(x.gioiTinh,sizeof(x.gioiTinh),'\t');
		fin>>x.diemTBC;
		
		//neu la sv nu thi ghi ra tep moi, neu la sv nam thi day vao hang doi
		if(strcasecmp(x.gioiTinh,"Nam")==0) CQInsert(Q,F,R,x);
		else fout<<x.maSV<<'\t'<<x.hoTen<<'\t'<<x.gioiTinh<<'\t'<<x.diemTBC<<endl;
	}
	
	//lay sv nam tu hang doi ghi ra tep moi
	while(!CQIsEmpty(Q,F,R))
	{
		x = CQDelete(Q,F,R);
		fout<<x.maSV<<'\t'<<x.hoTen<<'\t'<<x.gioiTinh<<'\t'<<x.diemTBC<<endl;
	}
	
	cout<<"\nDa tao xong tep sinhvien2.txt";
	
	cout<<endl;
	return 0;
}
//Dinh nghia ham
void CQInsert(SinhVien *Q, int &F, int &R, SinhVien x)
{
	//kiem tra hang doi day
	if(F==0 && R==N-1 || R+1==F)
	{
		cout<<"Hang doi da day!";
		return;
	}
	
	//Tang R len 1
	if(R==-1) F=R=0;
	else if(R==N-1) R=0;
	else R++;
	
	//Dua x vao hang doi tai vi tri R
	Q[R] =x;
}

SinhVien CQDelete(SinhVien *Q, int &F, int &R)
{
	SinhVien temp;
	
	//kiem tra hang doi rong
	if(F==-1)
	{
		cout<<"Hang doi da rong!";
		return temp;
	}
	
	//giu lai phan tu dau hang doi
	temp = Q[F];
	
	//tang F len 1
	if)F==R)	F=R=-1;
	else if(F==N-1) F=0;
	else F++;
	
	//tra ve phan tu dau hang doi
	return temp;
}

bool CQIsEmpty(const SinhVien *Q, int F, int R)
{
	return F==-1;
}