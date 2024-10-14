#include<stdio.h>
#include<iostream>

int main()
{	
	int n;
	printf("Enter the number need to check: ");
	scanf_s("%d",&n);

	if (n <= 1)
	{
		printf("%d is not a prime number\n", n);
	}
	else {
		int isPrime = 1;
		for (int i = 2; i * i <= n; i++)
		{
			if (n % i == 0)
			{
				isPrime = 0;
				break;
			}
			
		}
		if (isPrime)
		{
			printf("%d is the prime number.\n", n);
		}
		else {
			printf("%d is not the prime number.\n", n);
		}
	}

	std::cout << std::endl;
	return 0;
}