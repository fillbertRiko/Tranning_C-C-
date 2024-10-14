#include <iostream>
using namespace std;

// Lớp cha Animal
class Animal {
public:
    // Phương thức ảo để phát ra âm thanh
    virtual void makeSound() const {
        cout << "Animal sound" << endl;
    }
};

// Lớp con Dog kế thừa từ Animal
class Dog : public Animal {
public:
    // Ghi đè phương thức makeSound
    void makeSound() const override {
        cout << "Woof woof" << endl;
    }
};

// Lớp con Cat kế thừa từ Animal
class Cat : public Animal {
public:
    // Ghi đè phương thức makeSound
    void makeSound() const override {
        cout << "Meow meow" << endl;
    }
};

int main() {
    // Tạo đối tượng Animal, Dog, và Cat
    Animal* animalPtr = new Animal();
    Animal* dogPtr = new Dog();
    Animal* catPtr = new Cat();

    // Gọi phương thức makeSound trên các đối tượng
    animalPtr->makeSound();  // Gọi từ lớp Animal
    dogPtr->makeSound();     // Gọi từ lớp Dog (ghi đè)
    catPtr->makeSound();     // Gọi từ lớp Cat (ghi đè)

    // Giải phóng bộ nhớ
    delete animalPtr;
    delete dogPtr;
    delete catPtr;

    return 0;
}
