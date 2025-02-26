#include <iostream>
using namespace std;

class Rectangle
{
public:
		int length;
		int breadth;
		
		int area()
		{
			return length*breadth;
		}
		
		int perimeter()
		{
			return 2*(length+breadth);
		}
};
void main()
{
	Rectangle r1,r2;
	
	cout << "Enter the r1" << endl;
	cin >> r1.length >> r1.breadth;
	cout << "Enter the r2" <<endl;
	cin >> r2.length >> r2.breadth;
	
	cout << r1.area() << "And " << r1.perimeter()<<endl;
	cout << r2.area() << "And " << r2.perimeter()<<endl;
	
}
