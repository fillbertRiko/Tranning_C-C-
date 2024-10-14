/*
Bài tập 2: Quản lý hình học
Tạo một lớp trừu tượng Shape với các phương thức ảo thuần túy draw() và calculateArea().
Tạo hai lớp con Circle và Square kế thừa từ Shape. Mỗi lớp sẽ cài đặt phương thức draw() và calculateArea().
Circle: Tính diện tích theo công thức π * r^2.
Square: Tính diện tích theo công thức a * a (với a là độ dài cạnh).
Tạo một mảng chứa các đối tượng Shape* và gọi phương thức draw() và calculateArea().
*/

#include <iostream>
#include <math.h>
#include <stdio.h>
#define PI 3.14
#define N 64
using namespace std;

//lop truu tuong Shape
class Shape{
    public:
        //phuong thuc ao thuan tuy
        virtual void draw() const =0;   //hinh deu phai duoc ve ra

        virtual void calculateArea() const = 0; //hinh deu duoc tinh toan dien tich

        //Destructor ao de dam bao hu dung lop con
        virtual ~Shape()  {}
};

//lop ke thua tu Shape cho circle
class Circle : public Shape{
    public:
    //ghi de phuong thuc draw
        void draw() const override{
            cout << "Draw circle" << endl;
        }

        //ghi de phuong thuc caculateArea
        void calculateArea() const override{
            float R;
            cout << "Enter the R: ";
            cin >> R;
            printf("Area of circlie is: %.2f\n", PI*pow(R,2));
        }
};

//lop ke thua tu Shape cho square
class Square : public Shape{
    public:
    //ghi de phuong thuc draw
        void draw() const override{
            cout << "Draw square" << endl;
        }

    //ghi de phuong thuc calculateArea
        void calculateArea() const override{
            int a;
            cout << "Enter the side of squre: ";
            cin >> a;
            cout << "Area of square is: " << pow(a,2) <<endl;
        }
};

int main()
{
    //khai bao vecto luu tru S
    char S[N];
    int T =-1;

    //su dung con tro Shape de quan ly cac loai phuong tien khac nhau
    Shape* shapes[3];

    //tao doi tuong Circle va Square
    shapes[0] = new Circle();
    shapes[1] = new Square();

    //goi phuong thuc draw va calculateArea qua con tro Shape
    for(int i=0;i<sizeof(shapes);i++)
    {
        shapes[i]->draw();
        shapes[i]->calculateArea();
        cout << "-------------------" << endl;
    }

    //bo sung them mang vao sau


    
    //giai phong bo nho
    for(int i=0;i<sizeof(shapes);i++)
    {
        delete shapes[i];
    }

    cout << endl;
    return 0;
}

void push(char *S, int &T, char x)
{
    //kiem tra rong
    if(T == N-1)
    {
        cout << "Ngan xep da day" << endl;
        return;
    }
    S[++T] = x;
}

char pop(char *S, int &T)
{
    if(T==-1)
    {
        cout << "Ngan xep rong\n";
        return 1;
    }
    return S[T--];
}

bool isEmpty(char *S, int T)
{
    return T==-1;
}