#include <iostream>

using namespace std;

int main()
{
    cout << "Chuong trinh nhap vao 1 so nguyen va in tat ca cac uoc cua so do\n\n";
    int n;

    cout << "Enter the num: ";
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout << i << " ";
        }
    }
    return 0;
}