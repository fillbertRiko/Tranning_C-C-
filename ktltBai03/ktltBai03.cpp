// ktltBai03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //khai bao bien
    unsigned int n,x,i;
    bool laNguyenTo;

    //Thong bao ten chuong trinh va yeu cau nhap du lieu
    printf("Chuong trinh tim cac so nguyen to nho hon n\n\n");
    printf("Nhap vao so nguyen duong n: ");
    scanf_s("%u", &n);

    //Thuc hien tim cac so nguyen to
    for (x=1; x < n; x++)
    {
        laNguyenTo = 1;
        for (i=2; i <= (unsigned int) sqrt(x); i++)
        {
            if (x % i == 0)
            {
                laNguyenTo = 0;
                break;
            }
        }
        if (laNguyenTo) printf("%u ", x);
    }
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
