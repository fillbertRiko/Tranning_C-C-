#include <stdio.h>
#include <iostream>
#include <ctype.h>

// Hàm nhập ma trận
void myMatrix(int m, int n, int **d)
{
    printf("Enter the matrix: \n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &d[i][j]);
        }
    }
}

int main()
{
    int x, y, z;

    printf("Program to calculate the matrix\n\n");
    printf("Enter the size of matrix A (rows and columns): \n");
    scanf("%d%d", &x, &y); // Nhập kích thước của ma trận A

    printf("Enter the size of matrix B (columns of A and columns of B): \n");
    scanf("%d%d", &y, &z); // Nhập kích thước của ma trận B (cột của A và cột của B)

    int **a=(int **)malloc(x * sizeof(int *));
    for(int i=0;i<x;i++)
    {
        a[i]= (int *)malloc(y * sizeof(int));
    }
    int **b=(int **)malloc(y * sizeof(int *));
    for(int i=0;i<y;i++)
    {
        b[i]=(int *)malloc(z * sizeof(int));
    }

    myMatrix(x, y, a); //Nhập ma trận A
    myMatrix(y, z, b); //Nhập ma trận B

    int **c=(int **)malloc(x * sizeof(int));
    for(int i=0;i<x;i++)
    {
        c[i]=(int *)malloc(z * sizeof(int));
    }

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<z;j++)
        {
            c[i][j] = a[i][j] * b[i][j];
        }
    }

    printf("\nMatrxi A = \n");
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
        {
            printf("%3d",a[i][j]);
        }


    printf("\nMatrix B = \n");
    for(int i=0;i<y;i++)
        for(int j=0;j<z;j++)
        {
            printf("%3d",b[i][j]);
        }

    printf("\nMatrix C = \n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<z;j++)
        {
            printf("%3d",c[i][j]);
        }
    }

    for(int i = 0;i<x;i++)
    {
        free(a[i]);
    }
    free(a);
    for(int i=0;i<y;i++)
    {
        free(b[i]);
    }
    free(b);
    for(int i=0;i<x;i++)
    {
        free(c[i]);
    }
    free(c);

    // Thêm logic tính toán nếu cần thiết...

    return 0;
}
