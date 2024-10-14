/*
#### **Bài tập 2: Thực hành đa hình**
1. Tạo lớp cha `Shape` với phương thức ảo `draw()`.
2. Tạo lớp con `Circle` và `Square` kế thừa từ `Shape`, mỗi lớp ghi đè phương thức `draw()` để in ra "Vẽ hình tròn" hoặc "Vẽ hình vuông".
3. Tạo một mảng chứa các đối tượng `Shape*`, sau đó gọi phương thức `draw()` trên từng đối tượng trong mảng để thể hiện tính đa hình.
*/
#include <iostream>
using namespace std;

//lop cha
class Shape
{
    public:
    //phuong thuc ao de ve
        virtual void draw() const {
            cout << "Draw picture" << endl;
        }
};

//lop con circle va square tu shape
class Circle : public Shape {
    public:
    //ghi de phuong thuc draw
        void draw() const override {
            cout << "Draw circle" << endl;
        }
};

class Square : public Shape {
    public: 
        void draw() const override {
            cout << "Draw square" << endl;
        }
};

int main()
{
    //tao doi tuong Shape, Circle va Square
    Shape* shapePtr = new Shape();
    Shape* circlePtr = new Circle();
    Shape* squarePtr = new Square();

    //goi phuong thuc draw tren cac doi tuong
    shapePtr->draw();   //goi tu lop shape
    circlePtr->draw();  //goi tu lop circle(ghi de/override)
    squarePtr->draw();  //goi tu lop square(ghi de/override)

    //giai phong bo nho sau khi da ghi de
    delete shapePtr;
    delete circlePtr;
    delete squarePtr;
    
    return 0;
}