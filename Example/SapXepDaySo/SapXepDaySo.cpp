//sap xep day so a1,a2,a3,..,an. Dua cac so le ve dau day, cac so chan ve cuoi day
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	//Khai bao 
	unsigned int n;
	
	//in ra man hinh yeu cau
	printf("Chuong trinh sap xep mang theo thu so le dau day, so chan cuoi day\n");
	printf("Nhap vao gia tri cuoi cua mang: ");
	scanf("%u", &n);

	//enter the number into array
	int* arr = (int*)malloc(n*sizeof(int));

	for(int i=0;i<n;i++)
	{
		printf("a%d = ",i);
		scanf("%d", &arr[i]);
	}

	printf("\nThe array of number just turn in is: \n");
	//print the number of array
	for(int i=0;i<n;i++)
	{
		printf("%3d", arr[i]);
	}

	int temp;
	//remake the array turn in
	for(int i=0;i<n;i++)
	{
		if(arr[i]<arr[i+1])
		{
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}

	printf("\nThe array after change is: \n");
	//print after change
	for(int i=0;i<n;i++)
	{
		printf("%3d", arr[i]);
	}

	free(arr);
	cout << endl;
	return 0;
}