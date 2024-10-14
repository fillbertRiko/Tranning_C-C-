#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Chuong trinh tinh tong S = 1+1/2+1/3+...+1/N\n\n";

    int num;

    cout << "Enter the number want to solve: ";
    cin >> num;

    double S = 0;

    for(int i=1;i<=num;i++)
    {
        S += S + (double)1/i;
        i++;
    }

    cout << fixed << setprecision(2) << S;
    return 0;
}
