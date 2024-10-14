#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Program couting S \n";
    int n;
    cout << "Enter number of num: ";
    cin >> n;
    long double S;
    S =0;

    for(int i=1;i<n;i++)
    {
        S +=S+(long double)pow(i,2);
        i++;
    }

    cout << "The result is: " << S << endl;
    return 0;
}