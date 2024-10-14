#include <iostream>

using namespace std;

int main()
{
    int sum, a,b,c;
    cout << "Enter the nums a,b,c: \n";
    cin >> a >>b >> c;

    //caculate the sum
    sum = a*(b +c) +b*(a+c);

    cout << "S = a*(b+c)+b*(a+c)"<<endl;
    cout << "Sum S = " << sum << endl;
    return 0;
}