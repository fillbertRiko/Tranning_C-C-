#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int result, term;
    cout << "Enter the number and num/ ";
    cin >> x >> y;

    result = x/y;
    term = x%y;

    cout << "The result is: " << result << endl;
    cout << "The path of result is: " << term <<endl;

    return 0;
}