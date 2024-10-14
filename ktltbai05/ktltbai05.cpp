<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<math.h>

#define pi 3.1415
=======
// ktltbai05.cpp     : This file contains the 'main' function. Program execution begins and ends there.
//viet chuong trinh tao menu

#include <stdio.h>
#include <iostream>
#include <math.h>

#define pi 3.14
>>>>>>> e6460ac3a2c42886b89e1523a98077a6a741bec6

using namespace std;

int main()
{
    //khai bao bien
<<<<<<< HEAD
    float a1,a2,a3,r,dai,rong,cv,dt;
    char stt;

    //In ra menu va thong bao
    do
    {
        printf("\n\n====================================================");
        printf("\n\nCHUONG TRINH TINH DIEN TICH VA CHU VI CAC HINH\n\n");
        printf("1. Tinh dien tich va chu vi hinh tam giac biet 3 canh\n2. Tinh dien tich va chu vi hinh tron biet ban kinh\n3. Tinh dien tich va chu vi hinh chu nhat biet 2 canh\n4. Ket thuc chuong trinh");
        printf("\n\nChon hinh de tinh(1/2/3/4): ");
        scanf("%c",&stt);

    //Lua chon Menu
        switch (stt)
        {
            case '1':
            {
                printf("===================================================");
                printf("\nChao mung den voi chuong trinh tinh hinh tam giac");
                printf("\n\nHay nhap vao 3 canh tam giac lan luot a1, a2, a3: \n");
                scanf("%f%f%f",&a1,&a2,&a3);

                //kiem tra 3 canh co phai la cua 1 tam giac hay khong
                if(a1+a2>a3&&a1+a3>a2&&a2+a3>a1)
                {
                    cv = a1+a2+a3;
                    dt = sqrt((cv/2)*((cv/2)-a1)*((cv/2)-a2)*((cv/2)-a3));
                    printf("\nDien tich va chu vi cua tam giac voi 3 canh %f, %f, %f la: \n",a1,a2,a3);
                    printf("Dien tich = %0.1f\nChu vi = %0.1f",dt,cv);
                }else
                {
                    printf("\n3 canh da nhap khong la 3 canh cua tam giac\n\n");
                }
            }
            break;
        case '2':
            {
                printf("=================================================");
                printf("\nChao mung den voi chuong trinh tinh hinh tron");
                printf("\n\nHay nhap vao ban kinh r: \n");
                scanf("%f",&r);

                dt = pi*r*r;
                cv = 2*pi*r;
                printf("\nDien tich va chu vi cua hinh tron ban kinh %f la: \n",r);
                printf("Dien tich = %0.1f\nChu vi = %0.1f",dt,cv);
            }
            break;
        case '3':
            {
                printf("===================================================");
                printf("\nChao mung den voi chuong trinh tinh hinh chu nhat");
                printf("\n\nHay nhap vao chieu dai va chieu rong: \n");
                scanf("%f%f",&dai,&rong);

                dt = dai*rong;
                cv = (dai+rong)*2;
                printf("\nDien tich va chu vi hinh chu nhat co chieu dai %f va chieu rong %f la: \n",dai,rong);
                printf("Dien tich = %0.1f\nChu vi = %0.1f",dt,cv);
            }
            break;
        default:
            printf("===== =====");
            printf("\n!!!Ban da chon thoat!!!\n");
            break;
        case '5':
            printf("===== =====");
            printf("\n!!!Lua chon khong hop le, vui long chon lai\n");
            break;
        }
        while(getchar() != '\n');
    }while(1);
    
    
    cout<<endl;
    return 0;
}
//=====Dinh nghia ham=====

=======
    int luaChon;

    //Thong bao ten chuong trinh va yeu cau nhap dau vao
    do
    {
        printf("Chuong trinh Tinh Dien tich va Chu Vi cac hinh\n\n");
        printf("1. Tinh dien tich va chu vi hinh tam giac biet 3 canh\n");
        printf("2. Tinh dien tich va chu vi hinh tron biet ban kinh\n");
        printf("3. Tinh dien tich va chu vi hinh chu nhat biet 2 canh\n");
        printf("4. Ket thuc chuong trinh\n\n");
        printf("Chon hinh de tinh(1/2/3/4): ");
        scanf_s("%d", &luaChon);

        //Chuong trinh 1
        do
        {
            switch (luaChon)
            {
            case 1:
            {
                float a1, a2, a3, dt, cv;
                printf("Chao mung den voi chuong trinh tinh hinh tam giac\n");
                printf("Xin moi nhap vao 3 canh cua tam giac:\n");
                scanf_s("%f%f%f", &a1, &a2, &a3);

                //Thuc hien tinh hinh tam giac
                cv = a1 + a2 + a3;
                dt = sqrt(cv * (cv - a1) * (cv - a2) * (cv - a3));

                //Dua ket qua ra man hinh
                printf("Dien tich va chu vi hinh tam giac la:\n");
                printf("Dien tich = %0.2f\nChu vi = %0.2f", dt, cv);
            }
            break;
            case 2:
            {
                float banKinh, dt, cv;
                printf("Chao mung den voi chuong trinh tinh hinh tron\n");
                printf("Xin moi nhap vao ban kinh r: ");
                scanf_s("%f", &banKinh);

                //Thuc hien tinh hinh tron
                cv = 2 * pi * banKinh;
                dt = pi * banKinh * banKinh;

                //Dua ket qua ra man hinh
                printf("Dien tich va chu vi hinh tron la:\n");
                printf("Dien tich = %0.2f\nChu vi = %0.2f", dt, cv);
            }
            break;
            case 3:
            {
                float chieuDai, chieuRong, dt, cv;
                printf("Chao mung den voi chuong trinh tinh hinh chu nhat\n");
                printf("Xin moi nhap vao chieu dai va chieu rong: \n");
                scanf_s("%f%f", &chieuDai, &chieuRong);

                //Thuc hien tinh hinh chu nhat
                cv = (chieuDai + chieuRong) * 2;
                dt = chieuDai * chieuRong;

                //Dua ket qua ra man hinh
                printf("Dien tich va chu vi hinh chu nhat la:\n");
                printf("Dien tich = %0.2f\nChu vi = %0.2f", dt, cv);
            }
            break;
            case 4:
                return 0;
                break;
            }
        } while (getchar());
        //Kiem tra lua chon co dung hay khong
        if (luaChon > 4) printf("So ban nhap khong hop le, xin moi nhap lai!!!");
    } while (luaChon > 4);
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
//   5. Go to Proj
// ect > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
>>>>>>> e6460ac3a2c42886b89e1523a98077a6a741bec6
