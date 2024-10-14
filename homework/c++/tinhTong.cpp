#include <iostream>

using namespace std;

int main()
{
    long int n,S;
    cout << "Enter the n: ";
    cin >> n;
    S=0;
    for(int i=0;i<n;i++)
    {
        S += S+1;
        i++;
    }

    cout << "Result is: " << S <<endl;
    return 0;
}