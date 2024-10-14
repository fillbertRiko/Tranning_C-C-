#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Program check year\n\n";
    cout << "Enter the year want to check: ";
    cin >> year;

    if((year%400==0)||(year%4==0 && year%100!=0))
    {
        cout << "YES";
    }else if(year == 0 || year < 0){
        cout << "INVALID";
    }else{
        cout << "NO";
    }

    return 0;
}