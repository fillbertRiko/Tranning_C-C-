#include <iostream>

using namespace std;

int main()
{
    cout << "Chuong trinh ve hinh tam giac can bang dau *\n\n";

    int height;

    cout << "Enter the high of primist: ";
    cin >> height;

    //ve tam giac can
    for(int i=1;i<=height;i++)
    {
        //in khoang trang de can giua
        for(int j=1;j<=height-i;j++)
        {
            cout << " ";
        }

        //in ngoi sao
        for(int k=1;k<= 2 * i -1;k++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}