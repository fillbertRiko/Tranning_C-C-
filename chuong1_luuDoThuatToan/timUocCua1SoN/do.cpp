#include <iostream>

int main()
{
    int n,i;
    int temp;

    std::cout<< "Program print divisor of unsingned interger\n\n";
    std::cout << "Enter the number you want: ";
    std::cin >> n;

    i=0;

    int arr[11];
    
    for(int i=0;i<=10;i++)
    {
        arr[i] = n*i;
    }

    for(int i =0;i<10;i++)
    {
        if(arr[i]>n)
        {
            std::cout << "The divisor is: " << arr[i] << std::endl;
        }
    }
    

    return 0;
}