/*
bai 12: cai dat danh sach lien ket don co phan tu du lieu la so nguyen, voi cac phep toan sau:
	1. bo sung phan tu du lieu x vao sau nut M
	2. bo sung phan tu du lieu x vao truoc nut M
	3. xoa nut M
	4. duyet danh sach de dua cac phan tu du lieu ra man hinh
	5. tim mot nut co phan tu du lieu bang x, neu co trar ve dia chi nut, neu khong co tra ve rong.
su dung danh sach lien ket don P de luu tru day so nguyen theo thu tu doc vao tu tep van ban 'daysonguyen-bai12.txt', tren tep khong co thong tin ve so phan tu cua day so. tao dnah sach lien ket don Q bao gom cac phan tu du lieu bang x nhap vao tu ban phim.
*/
#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

//khai bao kieu cau truc nut nho cua DSLKD
struct Node
{
	int infor;
	Node *link;
};

//khai bao ham cai dat cac phep toan tren DSLKD
Node * SLPostInsert(Node* &F, Node *M, int x);
Node* SLPreInsert(Node* &F, Node *M, int x);
void SLDelete(Node* &F, Node *M);
void SLDisplay(Node* F);
Node* SLSearch(Node *F, int x);

int main()
{
	//Cai dat cau truc luu tru phan tan cua DSLKD P va Q
	Node *P=NULL,*Q=NULL;
	
	//khai bao tep doc vao
	ifstream fin("daysonguyen-bai12.txt");
	
	//khai bao bien
	int x;
	Node *M;
	
	//doc tung so cua day so tu tep va bo sung vao cuoi DSLKD P
	while(fin>>x) M=SLPostInsert(P,M,x);
	
	//dua ra day so trpng DSLKD P
	cout<<"Chuong trinh tao DSLKD Q la dao nguoc cua DSLKD P";
	cout<<"\n\nDay so trong DSLKD P la:\n";
	SLDisplay(P);
	
	//tao DSLKD Q la dao nguoc cua P
	M=P;
	while(M)
	{
		SLPreInsert(Q,Q,M->infor);
		M = M->link;
	}
	
	//dua ra day so trong DSLKD Q
	cout<<"\n\nDay so trong DSLKD Q la:\n";
	SLDisplay(Q);
	
	//xoa phan tu bang x
	cout<<"\n\nNhap vao phan tu x can xoa: ";
	cin>>x;
	
	M=SLSearch(P,x);
	if(M)
	{
		//xoa nut M
		SLDelete(P,M);
		
		//dua ra P sau khi xoa
		cout<<"\n\nDay so trong DSLKD P sau khi xoa phan tu bang "<<x<<":\n";
		SLDisplay(P);
	}
	else cout<<"\n\nTrong DSLKD P khong co phan tu bang "<<x<<".";
	cout<<endl;
	return 0;
}
Node* SLPostInsert(Node* &F, Node *M, int x)
{
	//Tao nut nho moi chua x
	Node *N = new Node;
	N->infor = x;
	N->link =NULL;
	
	//noi nut moi vao sau nut M
	if(F==NULL) F=N;
	else{
		N->link = M->link;
		M->link = N;
	}
	
	//tra ve dia chi nut moi bo sung
	return N;
}

Node* SLPreInsert(Node* &F, Node *M, int x)
{
	//tao nut nho moi chua x
	Node *N=new Node;
	N->infor = x;
	N->link = NULL;
	
	//noi nut moi vao truoc nut M
	if(F==NULL) F=N;
	else if(M==F)
	{
		N->link = M;
		F = N;
	}
	else{
		//Tim nut P truoc nut M
		Node *P =F;
		while(P->link !=M) P=P->link;
		
		//noi nut moi vao truoc nut M, sau P
		P->link = N;
		N->link = M;
	}
	
	//tra ve dia chi nut moi bo sung
	return N;
}

void SLDelete(Node* &F, Node *M)
{
	//truong hop DSLKD rong
	if(F==NULL)
	{
		cout<<"DSLD da rong";
		return;
	}
	
	//Ngat ket noi voi nut M
	if(M==F) F= F->link;
	else{
		//tim nut P truoc nut M
		Node *P=F;
		while(P->link!=M) P=P->link;
		
		//noi nut truoc M voi nut sau M
		P->link = M->link;
	}
	
	//huy nut M
	delete M;
}

void SLDisplay(Node* F)
{
	Node *P =F;
	while(P)
	{
		cout<<P->infor<<"	";
		P = P->link;
	}
}

Node* SLSearch(Node *F, int x)
{
	//tim nut cp phan tu bang x
	Node *P=F;
	while(P)
	{
		if(P->infor==x) break;
		else P = P->link;
	}
	
	//tr ve ket qua tim kiem
	return P;
}