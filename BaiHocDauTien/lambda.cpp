#include <iostream>

using namespace std;

int add(int a, int b);

int main()
{
    auto printHello = []()
    {
        cout << "Hello world!";
    };
    printHello();

    int (*funcptr)(int, int) = add;
    
    cout << funcptr(4,5);
    return 0;
}
int add(int a, int b)
{
    return a+b;
}