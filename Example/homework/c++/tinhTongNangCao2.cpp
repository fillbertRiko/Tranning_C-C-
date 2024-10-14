#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Caculate the sum S\n\n";
    unsigned int n;
    cout << "Enter the number n: ";
    cin >> n;

    double S;
    S = 0;

    for(int i=1;i<=n;i++)
    {
        S += S + (float)(1/(i*(i+1)));
        i++;
    }
    cout << fixed << setprecision(2) << "The result is: " << S << endl;
    return 0;
}