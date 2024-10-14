#include <iostream>
#include <string>

using namespace std;

// Định nghĩa lớp cha Person
class Person {
protected:         // Thuộc tính protected (Có thể truy cập từ lớp con)
    string name;
    int age;

public:
    // Constructor của lớp Person
    Person(string personName, int personAge) {
        name = personName;
        age = personAge;
    }

    // Phương thức in thông tin của lớp Person
    void displayInfo() const {
        cout << "Tên: " << name << ", Tuổi: " << age << endl;
    }
};

// Định nghĩa lớp con Student kế thừa từ Person
class Student : public Person {
private:
    string school;

public:
    // Constructor của lớp Student
    Student(string studentName, int studentAge, string studentSchool)
        : Person(studentName, studentAge) {  // Gọi constructor của lớp cha
        school = studentSchool;
    }

    // Phương thức in thông tin của lớp Student
    void displayStudentInfo() const {
        displayInfo();  // Gọi phương thức của lớp cha
        cout << "Trường: " << school << endl;
    }
};

int main() {
    // Tạo đối tượng Student
    Student student1("John Doe", 20, "Harvard University");
    
    // In thông tin sinh viên
    student1.displayStudentInfo();
    
    return 0;
}
