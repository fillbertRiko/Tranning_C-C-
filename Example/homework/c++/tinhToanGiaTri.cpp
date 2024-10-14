#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sum, x;
    cout << "Enter the x: ";
    cin >> x;

    sum = pow(x, 3) + 3* pow(x,2) + x + 1;
    cout << "The result is: " << sum <<  endl;
    return 0;
}