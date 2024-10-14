/*
Bài tập 1: Quản lý động vật
Tạo một lớp trừu tượng Animal với hai phương thức ảo thuần túy makeSound() và move().
Tạo hai lớp con Dog và Bird kế thừa từ Animal. Mỗi lớp sẽ ghi đè các phương thức này.
Dog: makeSound() in ra "Woof Woof", move() in ra "Run".
Bird: makeSound() in ra "Chirp Chirp", move() in ra "Fly".
Tạo mảng chứa các đối tượng Animal* và gọi phương thức makeSound() và move().
*/

#include <iostream>
using namespace std;

//lop truu tuong animal
class Animal {
    public: 
    //phuong thuc ao thuan tuy
    virtual void makeSound() const =0;  //dong vat phai co tieng keu

    virtual void move() const = 0;      //dong vat phai co kha nang di chuyen

    //Destructor ao de dam bao huy lop con
    virtual ~Animal() {}
};

//lop Dog ke thua tu Animal
class Dog : public Animal {
    public:
        //ghi de phuong thuc makeSound
        void makeSound() const override {
            cout << "Woff Woff" << endl;
        }

        void move() const override {
            cout << "Run" << endl;
        }
};

//lop Bird ke thua tu Animal
class Bird : public Animal {
    public:
        //ghi de phuong thuc makeSound
        void makeSound() const override {
            cout << "Chirp Chirp"<< endl;
        }

        //ghi de phuong thuc move
        void move() const override {
            cout << "Fly" << endl;
        }
};

int main()
{
    //su dung con tro Animal de quan l cac loai dong vat khac nhau
    Animal* animals[2];

    //tao doi tuong Dog va Bird
    animals[0] = new Dog();
    animals[1] = new Bird();

    //goi phuong thuc makeSound va move thong qua con tro Animal
    for(int i=0; i<2;i++)
    {
        animals[i] ->makeSound();
        animals[i]->move();
        cout << "------------------" << endl;
    }

    //giai phong bo nho
    for(int i=0; i < 2;i++)
    {
        delete animals[i];
    }

    cout << endl;
    return 0;
}