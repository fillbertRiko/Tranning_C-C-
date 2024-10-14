#include <stdio.h>
#include <stdlib.h>

void enterTheMatrix(int **a, int col, int row)
{
    int i,j;
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("a%d%d = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
}

void printTheMaTrix(int **a, int col, int row)
{
    int i,j;
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m,n;
    int **a = NULL;

    printf("Program enter the matrix with 6 column 6 row\n\n");;
    printf("Enter the column and row: \n");
    scanf("%d%d",&m,&n);

    //cap phat mang con tro cap 1
    a = (int**)malloc(m * sizeof(int *));
    for(int i=0;i<m;i++)
    {
        //cap phat tung con tro
        a[i] = (int*)malloc(n * sizeof(int));
    }
    //enter the concusion of matrix
    enterTheMatrix(a,m,n);
    printf("\n\nThe matrix of %dx%d is: \n\n",m,n);
    printTheMaTrix(a,m,n);

    for(int i= 0;i<m;i++)
    {
        free(a[i]);
    }
    free(a);
    return 0;
}
