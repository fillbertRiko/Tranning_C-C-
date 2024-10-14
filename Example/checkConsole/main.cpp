#include <iostream>
#include <plog/Log.h>
#include <plog/Initialazers/RollingFileInitializier.h>

int getUserInput()
{
    PLOGD << "getUserInput() called";
    std::cout << "Enter the number";
    int x{};
    std::cin >> x;
    return x;
}

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    plog::init(plog::debug, "Logfile.txt");

    PLOGD << "main() called";

    int x{ getUserInput() };
    std::cout << "You entered: " << x << '\n';

    return 0;
}
