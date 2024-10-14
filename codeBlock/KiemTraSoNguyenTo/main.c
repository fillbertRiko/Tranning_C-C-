#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<stdbool.h>

bool isPrime(int a)
{
    if(a<=1)
    {
        return false;
    }else if(a==2)
    {
        return true;
    }else if(a%2==0)
    {
        return false;
    }
    for(int i=3;i<=sqrt(a);i +=2)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    unsigned int num;
    printf("Program check the number is the prime or not\n\n");
    printf("Enter the num: ");
    scanf("%u",&num);

    if(isPrime(num))
    {
        printf("\n\nIs the prime\n");
    }else{
        printf("\n\nNot prime");
    }
    return 0;
}
