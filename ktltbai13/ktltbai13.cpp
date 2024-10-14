#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    //khai bao bien
    int n, thuong , du, i, length;
    char changeLog[2][2] = {"1","0"};
    char log[16]="";
    printf("Enter the array have max 16bit and print out the result of that number\n\n");
    scanf("%d",&n);

    while(sizeof(n)>16)
    {
        printf("The String you turn in is take more bit than memory expect, please try again!!!\n\n")
        scanf("%d",&n);
    }

    thuong = n;
    while(thuong)
    {
        du = thuong %16;
        thuong /=16;

        //transform to the end of string
        strcat(log,changeLog[du]);
    }
    //turn string 16bit into type 1010 bit

    cout<<endl;
    return 0;
}