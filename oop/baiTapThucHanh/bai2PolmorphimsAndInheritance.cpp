/*
#### **Bài tập 3: Quản lý nhân viên**
1. Tạo lớp cha `Employee` với các thuộc tính như `name` và `salary`.
2. Tạo lớp con `Manager` kế thừa từ `Employee` và thêm thuộc tính `bonus`.
3. Tạo lớp con `Engineer` kế thừa từ `Employee` và thêm thuộc tính `specialization`.
4. Ghi đè phương thức `calculatePay()` trong cả hai lớp con để tính lương dựa trên các thuộc tính riêng.
5. Tạo một mảng chứa các đối tượng `Employee*`, sau đó sử dụng tính đa hình để tính và in ra lương của từng nhân viên.
*/
#include <iostream>
#include <string>
using namespace std;

class Employee{
    protected:
        string name;
        float salary;
    
    public:
    //Constructor cua lop Employee
        Employee(string employeeName, float employeeSalary)
        {
            name = employeeName;
            salary = employeeSalary;
        }

    //phuong thuc in thong tin cua lop employee
        void displayInfo() const {
            cout << "Name: " << name << ", Salary: " << salary << endl;
        }

        //phuong thuc ao de tinh luong rieng
        virtual float calculatePay() const {
            return salary;
        }
};

class Manager : public Employee {
    private:
        string bonus;

    public: 
    //constructor cua lop Manager
        Manager(string managerName, float managerSalary, string managerBonus) : Employee(managerName, managerSalary)  {
            bonus = managerBonus;
        }

        //phuong thuc in thong tin cua lop manager
        void displayManagerInfo() const {
            displayInfo();  //goi phuong thuc lop cha Employee
            cout << "Bonus: " << bonus << endl;
        }

        //ghi de phuong thuc calculatePay
        float calculatePay() const override {
            return salary+500;
        }
};

class Engineer : public Employee {
    private:
        string specialization;

    public: 
    //constructor cua lop Engineer
        Engineer(string engineerName, float engineerSalary, string engineerSpecialization) : Employee(engineerName, engineerSalary)  {
            specialization = engineerSpecialization;
        }

        //phuong thuc in thong tin cua lop engineer
        void displayEngineerInfo() const {
            displayInfo();  //goi phuong thuc lop cha Employee
            cout << "Specialization: " << specialization << endl;
        }

        float calculatePay() const override {
            return salary+1200;
        }
};
int main()
{
    Employee* employeePtr = new Employee("Dang Duong Huy", 1000);
    Manager* managerPtr = new Manager("Dang Duong Huyy", 1500, "+200$");
    Engineer* engineerPtr = new Engineer("DHuy", 1700, "Leader");
    
    //tao doi tuong manager va engineer
    Manager manager1("Dang Duong Huy", 1500 , "+200$");
    Engineer engineer1("Dang Duong Huy", 1500, "Leader");


    //in thong tin manager va engineer
    manager1.displayManagerInfo();
    engineer1.displayEngineerInfo();

    employeePtr->calculatePay();
    managerPtr->calculatePay();
    engineerPtr->calculatePay();

    //Giai phong bo nho
    delete employeePtr;
    delete managerPtr;
    delete engineerPtr;

    return 0;
}