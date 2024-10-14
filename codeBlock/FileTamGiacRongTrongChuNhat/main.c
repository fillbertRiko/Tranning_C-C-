#include <stdio.h>
#include <stdlib.h>

//function auto fill the matrix
void autoFillMatrix(char **arr,int col, int row)
{
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i==0||i==col-1)
            {
                arr[i][j] = '*';
            }else if(j<(row/2-i)||j>(row/2+i))
            {
                arr[i][j] = '*';
            }else{
                arr[i][j] = ' ';
            }
        }
    }
}

//function print matrix to the screen
void printMatrix(char **arr, int col, int row)
{
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}

//function call the array to put value inside
void callArray(char ***a,int col,int row)
{
    *a = (char **)malloc(col * sizeof(char *));
    for(int i=0;i<col;i++)
    {
        (*a)[i] = (char *)malloc(row * sizeof(char));
    }
}

//function free the memory array use
void freeArray(char **arr, int col, int row)
{

    for(int i=0;i<col;i++)
    {
        free(arr[i]);
    }
    free(arr);
}

int main()
{
    printf("Program to create a square  of '*' with a hollow triangle inside\n");
    int m,n;
    char **a;
    printf("Enter the value of m and n:\n");
    scanf("%d%d",&m,&n);

    //check m even and n odd
    if(m%2 != 0)
    {
        printf("\nm should be even number\n");
        return 1;
    }
    if(n%2 == 0)
    {
        printf("\nn should be odd number\n");
        return 1;
    }

    callArray(&a,m,n);
    autoFillMatrix(a,m,n);
    printMatrix(a,m,n);
    freeArray(a,m,n);

    return 0;
}
