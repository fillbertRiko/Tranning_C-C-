//cai dat cau truc du lieu ngan xep sur dung cau truc luu tru ke tiep voi phan tu du lieu la so nguyen. Su dung ngan xep de chuyen tu so he 10 sang he 2. Dua ra bit MSB cua so nhi phan tim duoc
#include<iostream>
#include<fstream>
#include<fstream>
using namespace std;

//khai bao do dai vecto luu tru S
#define N 32

//khai bao ham
void push(int *S, int &T, int x);
int pop(int *S, int &T);
bool isEmpty(const int *S, int T);

int main()
{
	//cai dat cau truc vecto luu tru
	int S[N];
	int T=-1;
	
	//khai bao bien
	int n, thuong, du;
	
	//Nhap so he 10
	cout<<"Chuong trinh chuyen tu so he 10 sang he 2"<<endl;
	cout<<"Nhap vao 1 so nguye duong: ";
	cin>>n;
	
	//Chuyen so he 10 sang he 2
	thuong =n;
	while(thuong)
	{
		du = thuong%2;
		thuong /= 2;
		
		//chuyen so du thanh so he 2  roi day vao ngan xep
		if(du<10) push(S,T,du);
	}
	
	//dua ra so he 2
	cout<<"so he 2 la: ";
	while(!isEmpty(S,T))	cout<<pop(S,T);
	
	cout<<endl;
	return 0;
}
//Dinh nghia ham
void push(int *S, int &T, int x)
{
	//1.Kiem tra day
	if(T==N-1)
	{
		cout<<"Ngan xep da day";
		return;
	}
	
	//2-3. Tang T len 1 roi dua x vao ngan xep tai vi tri T
	S[++T]=x;
}

int pop(int *S, int &T)
{
	//1.Kiem tra ngan xep rong
	if(T==-1)
	{
		cout<<"Ngan xep da rong!";
		return 1;
	}
	
	//2-3-4.Tra ve phan tu giam di 1
	return S[T--];
}

bool isEmpty(const int *S, int T)
{
	return T==-1;
}