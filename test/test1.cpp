#include <iostream>

int main()
{
    int r =0 ;
    int n;

    printf("Enter n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int k=1;k<=j;k++)
            {
                r =r+1;
            }
        }
    }

    printf("%d",r);

    return 0;
}