#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned int a,b;
    cout << "Program caculate the num divid max a and b\n\n";
    cout << "Enter the num a and b: \n";
    cin >> a >> b;

    //tam dung
    int x;
    x = a/b;
    if(a%b==1)
    {
        cout << (x+1)*b;
    }else{
        cout << x*b;
    }
    return 0;

}