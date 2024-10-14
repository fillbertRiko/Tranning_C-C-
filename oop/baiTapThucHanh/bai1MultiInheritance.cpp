/*
#### **Bài tập 1: Quản lý động vật và nhân viên sở thú**
1. Tạo lớp `Animal` với phương thức `makeSound()`.
2. Tạo lớp `Employee` với phương thức `work()`.
3. Tạo lớp `ZooKeeper` kế thừa từ cả `Animal` và `Employee`, và cho phép nhân viên sở thú có thể vừa làm việc vừa chăm sóc động vật.
*/
#include <iostream>
#include <string>
using namespace std;

//lop Animal(Thong tin dong vat)
class Animal
{
    protected:
        string name;
        int age;
    
    public:
        Animal(string animalName, int animalAge) : name(animalName), age (animalAge) {}

        void makeSound() const {
            cout << "Sound of " << name << ", have: " << age << endl;
        }
};

//lop employee
class Employee {
    protected:
        string name;
        float salary;
    public:
        Employee(string employeeName, float employeeSalary) : name(employeeName), salary(employeeSalary){}  

        void work() const {
            cout << "Employee: " << name << ", Salary: " << salary << endl;
        }
};

class ZooKepper : public Employee, public Animal {
    private: 
        int numberSeri;

    public: 
        ZooKepper(string zooKepperName, float zooKepperSalary, string zooKepperAnimalName, int zooKepperNumberSeri, int zooKepperAnimalAge): Employee(zooKepperName, zooKepperSalary), Animal(zooKepperAnimalName, zooKepperAnimalAge),numberSeri(zooKepperNumberSeri) {}

        void displayZooKepper() const {
            makeSound();
            work();
            cout << "Number Seri: " << numberSeri << endl;
        } 
};

int main()
{
    ZooKepper zooKepper1("Fillbert", 1500, "Lion", 2314 , 23);

    zooKepper1.displayZooKepper();
    
    cout <<  endl;
    return 0;
}