#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x1,x2,y1,y2;
    cout << "Enter the core of point 1: \n";
    cin >> x1 >> y1;
    cout << "Enter the core of point 2: \n";
    cin >> x2>> y2;

    cout << "Distant between 2 point is: " << sqrt(pow(x2-x1,2)+pow(y2-y1,2)) << endl;
    return 0;
}