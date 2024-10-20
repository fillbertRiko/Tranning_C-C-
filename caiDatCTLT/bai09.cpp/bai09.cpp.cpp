/*
* bai09: cai dat cau truc du lieu ngan xep su dung cau truc luu tru ke tiep voi phan tu du lieu la ki tu. Su dung ngan xep de chuyen bieu thuc trung to co dau ngoac day du sang dang hau to. Vi du: bieu thuc trung to la ((a+b)*2 => chuyen thanh bieu thuc hau to la a b + 2 *
*/
#include<iostream>
#include<stdio.h>
using namespace std;

//khai bao cau truc nut nho cay nhi phan
struct Node
{
	char infor;
	Node* left, * right;
};

//khai bao ham cai dat cac phep toan tren cay nhi phan
void preOrder(Node* T);
void inOrder(Node* T);
void postOrder(Node* T);

//chuong trinh chinh
int main()
{
	//cai dat cau truc luu tru phan tan tren cay nhi phan
	Node* T = NULL;

	//thu tao bieu thuc a+b 
	//tao nut goc
	T = new Node;
	T->infor = '+';
	T->left = T->right = NULL;

	//tao nut con trai
	T->left = new Node;
	T->left->infor = 'a';
	T->left->left = T->left->right = NULL;

	//tao nut con phai
	T->right = new Node;
	T->right->infor = 'b';
	T->right->left = T->right->right = NULL;

	//tao bieu thuc (a+b)*2
	//nut goc

	cout << endl;
	return 0;
}
void preOrder(Node* T)
{
	if (T == NULL)
	{
		return;
	}

	cout << T->infor << "  ";
	preOrder(T->left);
	preOrder(T->right);
}

void inOrder(Node* T)
{
	if (T == NULL)	return;

	preOrder(T->left);
	cout << T->infor << "  ";
	preOrder(T->right);
}

void postOrder(Node* T)
{
	if (T == NULL)	return;

	preOrder(T->left);
	preOrder(T->right);
	cout << T->infor << "  ";
}