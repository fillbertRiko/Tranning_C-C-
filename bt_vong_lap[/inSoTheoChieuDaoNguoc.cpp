#include <iostream>

long int daoNguocSo(long int num1, long int num2)
{
    long int backNumber =0;
    num2 = num1;
    do
    {
        backNumber = backNumber * 10;
        int digit = num1%10;
        backNumber+=digit;
        num1/=10;
    } while (num1);

    return backNumber; 
}

int main()
{
    long int num1,num2;
    std::cout << "Enter the num: ";
    std::cin >> num1;

    std::cout << "The integer just turn in is: " << num1 << std::endl;
    std::cout << "The backnumber is: " << daoNguocSo(num1,num2)<<std::endl;
    return 0;
}