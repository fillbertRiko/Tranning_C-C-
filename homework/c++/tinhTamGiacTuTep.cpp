#include <iostream>
#include <stdio.h>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    //khai bao tep vao ra
    ifstream fin("tamgiac.txt");
    ofstream fout("kq-ctdlgtbai00.txt");

    //khai bao bien
    float a,b,c,cv,dt,p;

    //kiem tra 3 canh co la tam giac khong
    if(a+b>c && a+c>b && b+c>a)
    {
        cout << "Chuong trinh tinh dien tich va chu vi hinh tam giac biet 3 canh a,b,c\n\n";
        printf("3 canh doc tu tep la:\na = %.2f\nb = %.2f\nc = %.2f",a,b,c);

        //tinh toan
        cv = a+b+c;
        p = cv/2;
        dt = sqrt(p*(p-a)*(p-b)*(p-c));

        printf("\nDien tich tam giac la: %.2f",dt);
        printf("\nChu vi tam giac la: %.2f",cv);

        //ghi ket qua ra tep
        fout << "Ba canh doc tu tep la: a = " << a << "\nb = " << b << "\nc = " << c;
        fout << "Dien tich tam giac la: " << dt;
        fout << "Chu vi tam giac la: " << cv;
    }else{
        cout << "3 so tren tep tamgiac.txt khong phai la tam giac";

        //ghi ket qua ra tep
        fout << "3 so tren tep tamgiac.txt khong phai la tam giac";
    }

    cout << "\n\nKet qua cuoi cung da duoc ghi ra tep kq-ctdlgtbai00.txt";

    cout << endl;
    return 0;
}