#include <iostream>

using namespace std;

int main()
{
    unsigned int a,b;
    cout << "Program find number\n\n";
    cout << "Enter the number a and b:\n";
    cin >> a >> b;

    int x;
    x = a/b;

    if(a%b!=0)
    {
        x = (x+1)*b;
        cout << x;
    }else{
        x = x*b;
        cout << x;
    }
    return 0;
}