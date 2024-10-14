#include <iostream>
#include "add.h"

using namespace std;

int doMath(int fisrt, int second, int third, int fourth);

int main()
{
    int num1, num2, num3, num4;

    cout << "Do math" << endl;
    cout << "Enter the num: " >> endl;
    cin >> num1 >> num2 >> num3 >> num4;

    cout << "The result is : " << doMath(num1, num2, num3, num4) << endl;

    return 0;
}

int doMath(int first, int seccond, int third, int fourth)
{
    return first - seccond*third/fourth;
}
