#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Program check number\n\n";
    cout << "Enter the number want to check: ";
    cin >> num;

    if(num%3==0 && num%5==0)
    {
        cout << "1";
    }else{
        cout << "0";
    }

    return 0;
}