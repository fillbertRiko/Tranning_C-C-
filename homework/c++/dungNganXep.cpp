//======================================
//CAU TRUC LUU TRU NGAN XEP
//======================================
#include <iostream>
#include <stdio.h>
#define N 32    //khai bao hang kich thuoc vecto luu tru S

using namespace std;

void push(int *S, int &T, int x);   //ham day vao ngan xep
int pop(int *S, int &T);            //ham xoa khoi ngan xep
bool isEmpty(const int *S, int T);  //ham kiem tra ngan xep

int main()
{
    //cai dat cau truc luu tru ngan xep
    int S[N];
    int T=-1;

    //khai bao bien
    int n, thuong ,du;

    //nhap n
    cout << "Chuong trinh chuyen doi he so tu 10 sang he 2\n\n";
    cout << "Nhap vao 1 so nguyen duong: ";
    cin >> n;

    //chuyen sang he 2
    thuong = n;
    while(thuong)
    {
        du = thuong%2;
        thuong /= 2;
        push(S,T,du);
    }

    cout << "So nhi phan cua " << n << " la: ";
    while(!isEmpty(S,T))    cout << pop(S,T);

    return 0;
}

void push(int *S, int &T, int x)
{
    //1.Kiem tra nga xep day hay chua
    if(T==N-1)
    {
        cout << "Ngan Xep Da Day!";
        return;
    }
    //2-3. Tang ngan xep len 1 va dua x vao ngan xep tai vi tri T
    S[++T] = x;
}

int pop(int *S, int &T)
{
    //1. Kiem tra ngan xep rong
    if(T==-1)
    {
        cout << "Ngan Xep Da Rong!";
        return 1;
    }

    //2-3-4. Tra ve phan tu dinh va giam T di 1
    return S[T--];
}

bool isEmpty(const int *S, int T)
{
    return T==-1;
}