<<<<<<< HEAD
//Ho va ten: Dang Duong Huy
//Lop:K68CNTTD
//MSSV: 681155
//De: 04
/*
Viet chuong trinh sinx voi do chinh xac 10^-4 theo cong thuc sau
    sinx = x - x^3/3! + x^5/5! + ... + (-1)^n*x^(2*n-1)/(2*n-1)! + ...
*/
#include <stdio.h>
#include <iostream>
=======
// ktltbai04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Viet chuong trinh tinh sinx voi do chinh xac 10^-4 theo cong thuc sau
    sinx = x - x^3/3! + x^5/5! + ... + (-1)^n*x^(2*n+1)/(2*n+1)! +... 
*/

#include <iostream>
#include <stdio.h>
>>>>>>> e6460ac3a2c42886b89e1523a98077a6a741bec6
#include <math.h>

using namespace std;

int main()
{
    //khai bao bien
<<<<<<< HEAD
    float x,S,tg;
    int i;

    //In ra tieu de chuong trinh va yeu cau nhap du lieu
    printf("Chuong trinh tinh sinx");
    printf("\n\nNhap vao gia tri cua x: ");
    scanf("%f",&x);

    //Thuc hien tinh toan
    S = x;
    tg = x;
    i = 0;
    do
    {
        i = i + 1;
        tg = (tg * x * x)/(2*i*(2*i+1));
        S = S + tg;
    }while(fabs(tg)<pow(10,-4));

    printf("Gia tri cua sinx la: %0.2f",S);
    cout<<endl;
    return 0;
}
=======
    float x,s,tg;
    int i = 0;

    //Thong bao ten chuong trinh va yeu cau nhap
    printf("Chuong trinh tinh gan dung sinx voi do chinh xac 10^-4\n\n");
    printf("Nhap vao gia tri cua x: ");
    scanf_s("%f", &x);

    //Thuc hien tinh toan sinx
    //tinh tong ve phai vao s
    s = x; tg = x;
    do
    {
        //tinh so hang thu i, luu lai trong tg
        i++;
        tg = tg * x * x / (2 * i * (2 * i + 1));

        //cong tru so hang thu i vao s
        if (i % 2 == 0)
        {
            s += tg;
        }
        else s -= tg;
    } while (fabs(tg)>=0.0001);

    //Dua ket qua ra man hinh
    printf("sin(x) = %0.4f", s);

    cout << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
>>>>>>> e6460ac3a2c42886b89e1523a98077a6a741bec6
