/*Tinh tong 2 ma tran nguyen. Ma tran A de trong tep matran-A.txt ma tran B de trong tep matran-B.txt. Ma tran cuoi duoc ghi trong tep kq-ctdlgtbai5.txt. su dung mang dong chua ma tran, viet ham doc tu ma tran tu tep. Viet ham dua ma tran va ham cong 2 ma tran
*/
#include<fstream>
#include<iostream>
#include<fstream>
using namespace std;

//khai bao ham 
void duaRaMT(int *V, int m, int n);
void tinhTong(int *VA, int *VB, int m, int n);

int main()
{
	//khai bao tep vao ra 
	ifstream finA("matran-A.txt");
	ifstream finB("matran-B.txt");
	ofstream fout("kq-ctdlgtbai05.txt");

	//cai dat cau truc luu tru mang 2 chieu
	int mA,mB,nA,nB;

	finA>>mA>>nA;
	finB>>mB>>nB;

	int *VA = new int[mA,nA];
	int *VB = new int[mB,nB];

	//doc ma tran tu tep vao mang 2 chieu
	for(int i=0;i<mA;i++)
	{
		for(int j=0;j<nA;j++)
		{
			//tinh chi so o nho phan tu ij
			int k=(i-1)*nA+j-1;

			//doc phan tu ij vao o nho k cua vecto luu tru V
			finA>>VA[k];
		}
	}
	for(int i=0;i<mB;i++)
	{
		for(int j=0;j<nB;j++)
		{
			//tinh chi so o nho phan tu ij
			int k=(i-1)*nB+j-1;

			//doc phan tu ij vao o nho k cua vecto luu tru V
			finB>>VB[k];
		}
	}

	cout<<"\nMa tran A co dang la:\n";
	duaRaMT(VA,mA,nA);
	cout<<"\nMa tran B co dang la:\n";
	duaRaMT(VB,mB,nB);

	tinhTong(VA,VB,mA,nA);
	
	cout<<endl;
	return 0;
}
//dinh nghia ham
void duaRaMT(int *V, int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			int k=(i-1)*n+j-1;

			printf("%6d",V[k]);
		}
	}
}

void tinhTong(int *VA, int *VB, int m, int n)
{
	int *VC=new int[m,n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			int k=(i-1)*n+j-1;

			VC[k] = VA[k]+VB[k];
		}
	}

	duaRaMT(VC, m,n);
}