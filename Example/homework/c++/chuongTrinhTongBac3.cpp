#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Chuong trinh tinh tong bac 3 cua N so nguyen\n\n";

    int n;

    cout << "Enter the N:";
    cin >> n;

    int S =0 ;

    for(int i=0;i<=n;i++)
    {
        S += S + pow(i,3);
    }

    cout << S;

    return 0;
}