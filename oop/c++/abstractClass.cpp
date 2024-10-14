//Mieu ta ve lop truu tuong trong c++


#include <iostream>
using namespace std;

// Lớp trừu tượng Vehicle
class Vehicle {
public:
    // Phương thức ảo thuần túy (pure virtual function)
    virtual void startEngine() const = 0;  // Phương tiện phải có động cơ

    virtual void move() const = 0;         // Phương tiện phải có khả năng di chuyển

    // Destructor ảo để đảm bảo hủy đúng lớp con
    virtual ~Vehicle() {}
};

// Lớp Car kế thừa từ Vehicle
class Car : public Vehicle {
public:
    // Ghi đè phương thức startEngine
    void startEngine() const override {
        cout << "Car engine started" << endl;
    }

    // Ghi đè phương thức move
    void move() const override {
        cout << "Car is driving" << endl;
    }
};

// Lớp Motorcycle kế thừa từ Vehicle
class Motorcycle : public Vehicle {
public:
    // Ghi đè phương thức startEngine
    void startEngine() const override {
        cout << "Motorcycle engine started" << endl;
    }

    // Ghi đè phương thức move
    void move() const override {
        cout << "Motorcycle is riding" << endl;
    }
};

int main() {
    // Sử dụng con trỏ Vehicle để quản lý các loại phương tiện khác nhau
    Vehicle* vehicles[2];

    // Tạo đối tượng Car và Motorcycle
    vehicles[0] = new Car();
    vehicles[1] = new Motorcycle();

    // Gọi phương thức startEngine và move thông qua con trỏ Vehicle
    for (int i = 0; i < 2; i++) {
        vehicles[i]->startEngine();
        vehicles[i]->move();
        cout << "----------------------" << endl;
    }

    // Giải phóng bộ nhớ
    for (int i = 0; i < 2; i++) {
        delete vehicles[i];
    }

    return 0;
}
