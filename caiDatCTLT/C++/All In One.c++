#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <ctype.h>
#include <assert.h>
using namespace std;

#define true 1
#define false 0

//====================================

template <class T>      //hàm tráo đổi
void swap(T& x, T& y)
{
    T tg=x;
    x=y;
    y=tg;
}

//=====================================

void nhap(int a[], int &n)
{
    int i,x;
    int choose;
    cout << "Enter the data into the list: " <<endl;
    cout << "1. Enter by hand" << endl;
    cout << "2. Enter auto and random" << endl;
    cout << "Please choose 1 or 2: " << endl;
    cin >> choose;
    cout << "Enter number of list: " << endl;
    fflush(stdin);
    cin >> n;
    if(choose == 1)
    {
        cout << "Please, enter numbers into the list: " <<endl;
        for(i=0;i<n;i++)
        {
            printf("a[%d]: ",i);
            cin >> a[i];
        }
    }
    else {
        randomize();
        for(i=0;i<n;i++)
        {
            x = randomize(10*n);
            a[i]= x;
        }
    }
}