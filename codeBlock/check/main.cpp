#include <iostream>

using namespace std;

int main()
{
    int a[] = {2,4,3,0,-7};
    int *p = &a[0];
    int *q = &a[3];

    cout << "q-p = "  << q-p <<endl;

    cout << *q << endl;
    cout << *p <<endl;

    return 0;
}
