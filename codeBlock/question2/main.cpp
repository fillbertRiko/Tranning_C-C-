#include <iostream>

using namespace std;

double getDouble()
{
    cout<<"Enter the double value: ";
    double x{};
    cin>>x;
    return x;
}

char getOperator()
{
    cout << "Enter +, -, * or /: ";
    char operation{};
    cin >> operation;
    return operation;
}

void printTheResult(double x, char operation, double y)
{
    if(operation == '+')
    {
        cout << x << '+' << y << " is " << x+y<<'\n';
    }else if(operation == '-')
    {
        cout << x << '-' << y << " is " << x-y << '\n';
    }else if(operation == '*')
    {
        cout << x << '*' << y << " is " << x*y << '\n';
    }else if(operation == '/')
    {
        cout << x << '/' << y << " is " << x/y << '\n';
    }
}

int main()
{
    cout << "Program solve the equation" <<endl;

    double x{ getDouble() };
    double y{ getDouble()};

    char operation (getOperator());

    printTheResult(x, operation, y);
    return 0;
}
