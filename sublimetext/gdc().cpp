#include<stdio.h>
#include<iostream>

using namespace std;

void gcd(int n, int m);
void timUSCLN(int x, int *a);

int main()
{
	int m,n;
	cout<<"Enter the number a and b: "<<endl;
	cin>>m,n;
	
	int a[m];
	int b[n];
	
	timUSCLN(m, a[m]);
	timUSCLN(n, b[n]);
	
	for(int i=0;i<
	
	return 0;
}
void timUSCLN(int x, int *a)
{
	for(int i=0;i<x;i++)
	{
		int temp;
		temp = x%i;
		if(temp==0)
		{
			a[i]=i;
		}
	}
}

