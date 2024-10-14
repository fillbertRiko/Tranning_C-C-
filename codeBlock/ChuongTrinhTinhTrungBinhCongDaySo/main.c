#include <stdio.h>
#include <stdlib.h>

//call array
void callArray(int **arr,int sizeOfArray)
{
    *arr = (int *)malloc(sizeOfArray * sizeof(int));
}

//free array
void delArray(int *arr)
{
    free(arr);
}

//enter the array
void enterValueOfArray(int *arr,int sizeOfArray)
{
    for(int i=0;i<sizeOfArray;i++)
    {
        printf("a%d = ",i);
        scanf("%d",&arr[i]);
    }
}

void printArray(int *arr,int sizeOfArray)
{
    for(int i=0;i<sizeOfArray;i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
}

float caculateValueOfArray(int *arr,int sizeOfArray)
{
    int sum = 0;
    float average;
    for(int i=0;i<sizeOfArray;i++)
    {
        sum += arr[i];
    }
    average = (float)sum/sizeOfArray;
    printf("The Average of number is: %0.4f",average);
    return average;
}

int main()
{
    printf("Program caculate the sum of number enter by keyboard\n");
    int *a;
    int n;
    printf("How many number you will add to caculate: \n");
    scanf("%d",&n);

    callArray(&a,n);
    printf("Enter the value of number: \n");
    enterValueOfArray(a,n);
    printf("The number you add is: \n");
    printArray(a,n);
    caculateValueOfArray(a,n);
    delArray(a);

    return 0;
}
