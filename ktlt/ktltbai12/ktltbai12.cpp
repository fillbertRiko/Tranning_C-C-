#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

using namespace std;

int main()
{
    unsigned int n,i,thuong, length, du;
    char soHex[9]="";
    char chuSoHex[16][2] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
    char temp;

    printf("The program enter the interger transform to hex\n\n");
    printf("Enter the number interger: \n");
    scanf("%u",&n);

    //transform interger to hex
    thuong = n;
    while(thuong)
    {
        du = thuong%16;
        thuong /= 16;

        //transform "du" to "chuSoHex" and put it to end of 
        strcat(soHex,chuSoHex[du]);
    }    
    //turn upside down of array to take the right number
    length = strlen(soHex);
    for(int i=0;i<length/2;i++)
    {
        temp = soHex[i];
        soHex[i] = soHex[length - 1 -i];
        soHex[length - i -1] = temp;
    }

    //print the result
    printf("The Hex number of %u after transform from Interger is : %s",n,soHex);

    cout<<endl;
    return 0;
}