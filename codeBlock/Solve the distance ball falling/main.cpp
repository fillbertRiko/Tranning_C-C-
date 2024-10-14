#include <iostream>

using namespace std;

double getTowerHight()
{
    cout << "Enter the high of tower!: ";
    double x{};
    cin >> x;
    return x;
}

double sovleTheHight(double towerHigh, int second)
{
    double gravity{9.8};
    double fallDistance { gravity *(second*second)/ 2.0};
    double distanceHigh {towerHigh - fallDistance};

    if(distanceHigh < 0.0)
    {
        return 0.0;
    }

    return distanceHigh;
}

void printTheResult(double distanceHigh, int second)
{
    if(distanceHigh > 0.0)
    {
        cout << "At " << second << " second, the ball is at height " << distanceHigh << " meters\n";
    }else {
        cout << "At " << second << " second, the ball is on the ground." << endl;
    }
}

void caculateTheHeight(double towerHeight, int second)
{
    double distanceHigh {sovleTheHight(towerHeight,second)};
    printTheResult(distanceHigh, second);
}

int main()
{
    cout << "Program sovle the equation of ball falling" << endl;

    double towerHeight{ getTowerHight() };

    for(int i=0;i<=5;i++)
    {
        caculateTheHeight(towerHeight, i);
    }
    /*
    caculateTheHeight(towerHeight,0);
    caculateTheHeight(towerHeight,1);
    caculateTheHeight(towerHeight,2);
    caculateTheHeight(towerHeight,3);
    caculateTheHeight(towerHeight,4);
    caculateTheHeight(towerHeight,5);
    */

    return 0;
}

