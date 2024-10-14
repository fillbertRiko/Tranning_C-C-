#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Chuong trinh in ra bang ma ASCII\n\n";

    //xu ly du lieu
    for(int i=0;i<128;i++)
    {
        printf("%5d%5cn",i,i);
    }
    cout << endl;
    return 0;
}