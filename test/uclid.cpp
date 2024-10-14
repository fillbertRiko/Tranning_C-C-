#include <stdio.h>
#include <iostream>

using namespace std;

int USCLN(int u, int v)
{

}

int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!= EOF)
    {
        if((x>=0)&&(y>=0))
        {
            printf("%d%d%d\n",x,y,USCLN(x,y));
        }
    }

    return 0;
}

