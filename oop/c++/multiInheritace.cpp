#include <iostream>
#include <string>

using namespace std;

// Lớp Person (thông tin cá nhân)
class Person {
protected:
    string name;
    int age;

public:
    Person(string personName, int personAge) : name(personName), age(personAge) {}

    void displayPersonInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Lớp Worker (thông tin công việc)
class Worker {
protected:
    string company;
    float salary;

public:
    Worker(string workerCompany, float workerSalary) : company(workerCompany), salary(workerSalary) {}

    void displayWorkInfo() const {
        cout << "Company: " << company << ", Salary: " << salary << endl;
    }
};

// Lớp Manager kế thừa từ cả Person và Worker
class Manager : public Person, public Worker {
private:
    int teamSize;

public:
    Manager(string managerName, int managerAge, string managerCompany, float managerSalary, int managerTeamSize)
        : Person(managerName, managerAge), Worker(managerCompany, managerSalary), teamSize(managerTeamSize) {}

    void displayManagerInfo() const {
        displayPersonInfo();  // Gọi phương thức từ lớp Person
        displayWorkInfo();    // Gọi phương thức từ lớp Worker
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    // Tạo đối tượng Manager
    Manager manager1("John Doe", 35, "TechCorp", 75000, 10);

    // Hiển thị thông tin của Manager
    manager1.displayManagerInfo();

    return 0;
}
