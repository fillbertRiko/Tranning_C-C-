#include <iostream>
#include <string>

using namespace std;

class Student {
private:          // 1. Phần private
    string name;  // Thuộc tính name (private)
    int age;      // Thuộc tính age (private)

public:           // 2. Phần public
    // 3. Constructor (Hàm khởi tạo)
    Student(string studentName, int studentAge) {
        name = studentName;  // Gán giá trị cho thuộc tính name
        age = studentAge;    // Gán giá trị cho thuộc tính age
    }

    // 4. Phương thức public - getter cho thuộc tính name
    string getName() const {
        return name;
    }

    // 5. Phương thức public - setter cho thuộc tính name
    void setName(string newName) {
        name = newName;
    }

    // 6. Phương thức public - in thông tin sinh viên
    void displayInfo() const {
        cout << "Tên: " << name << ", Tuổi: " << age << endl;
    }
};

// 7. Chương trình chính
int main() {
    // Tạo đối tượng Student
    Student student1("John Doe", 20);
    
    // In thông tin ban đầu của đối tượng
    student1.displayInfo();
    
    // Cập nhật tên của đối tượng
    student1.setName("Jane Smith");
    
    // In thông tin sau khi cập nhật
    student1.displayInfo();

    return 0;
}
