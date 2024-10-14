#include <stdio.h>
#include <stdlib.h>

void enterTheValueOfMatrix(int **arr, int sizeOfCol, int sizeOfRow)
{
    printf("Enter value in each element of matrix Amxn: \n");
    for (int i = 0; i < sizeOfCol; i++)
    {
        for (int j = 0; j < sizeOfRow; j++)
        {
            printf("a%d%d = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void enterVecto(int *arr, int sizeOfVecto)
{
    printf("Enter value in each element of vector Bn: \n");
    for (int i = 0; i < sizeOfVecto; i++)
    {
        printf("b%d = ", i);
        scanf("%d", &arr[i]);
    }
}

void printTheArray(int **arr, int sizeOfCol, int sizeOfRow)
{
    printf("The matrix is: \n");
    for (int i = 0; i < sizeOfCol; i++)
    {
        for (int j = 0; j < sizeOfRow; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}

void printVecto(int *arr, int sizeOfVecto)
{
    printf("The vector is: \n");
    for (int i = 0; i < sizeOfVecto; i++)
    {
        printf("%4d", arr[i]);
    }
    printf("\n");
}

void multiplyMatrixVsVecto(int **matrix, int *vecto, int *result, int sizeOfCol, int sizeOfRow)
{
    for (int i = 0; i < sizeOfCol; i++)
    {
        result[i] = 0; // Initialize result[i] to 0
        for (int j = 0; j < sizeOfRow; j++)
        {
            result[i] += matrix[i][j] * vecto[j];
        }
    }
}

void printResult(int *arr, int sizeOfVecto)
{
    printf("The result is: \n");
    for (int i = 0; i < sizeOfVecto; i++)
    {
        printf("%4d", arr[i]);
    }
    printf("\n");
}

int main()
{
    printf("Program to calculate the product of matrix Amxn and vector Bn\n");
    int m, n;
    int **matrix = NULL;
    int *vecto = NULL;
    int *result = NULL;

    printf("\nEnter the size of matrix (m rows, n columns):\n");
    scanf("%d%d", &m, &n);

    // Allocate memory for matrix and vector
    matrix = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++)
    {
        matrix[i] = (int*)malloc(n * sizeof(int));
    }
    vecto = (int*)malloc(n * sizeof(int));
    result = (int*)malloc(m * sizeof(int)); // Result has the size of m

    // Enter values for matrix and vector
    enterTheValueOfMatrix(matrix, m, n);
    enterVecto(vecto, n);

    // Print the matrix and vector
    printTheArray(matrix, m, n);
    printVecto(vecto, n);

    // Multiply matrix with vector
    multiplyMatrixVsVecto(matrix, vecto, result, m, n);

    // Print the result
    printResult(result, m);

    // Free allocated memory
    for (int i = 0; i < m; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
    free(vecto);
    free(result);

    return 0;
}
