#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int x;
    cout << "Enter the C: ";
    cin >> x;

    double F = ((float)x*9/5)+32;

    cout << fixed << setprecision(2) << F << endl;
    return 0;
}