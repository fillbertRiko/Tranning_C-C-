#include <iostream>
#define PI 3.14

using namespace std;

int main()
{
    float r;
    cout << "Enter r: ";
    cin >> r;

    printf("Chu vi va dien tich hinh tron co ban kinh %f la: \n",r);
    printf("chu vi = %.2f\ndien tich = %.2f",PI*r*r,2*PI*r);

    return 0;
}