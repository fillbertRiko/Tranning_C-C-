#include <iostream>

using namespace std;

int main()
{
    cout << "Program same caculate\n";
    int x,y;
    cin >> x >> y;
    while (y==0)
    {
        cout << "Return num 2 different\n";
    }

    cout << "result is: \n" << x+y << "\n" << x-y << "\n" << x*y << "\n" << x/y << endl;
    
    return 0;
}