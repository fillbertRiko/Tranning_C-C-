/*
#### **Bài tập 1: Thực hành kế thừa**
1. Tạo lớp `Car` với thuộc tính `brand`, `model`, và `year`.
2. Tạo lớp `ElectricCar` kế thừa từ `Car`, thêm thuộc tính `batteryCapacity`.
3. Viết phương thức để in thông tin đầy đủ về xe điện, bao gồm các thuộc tính của lớp cha.
*/
#include <iostream>
#include <string>
using namespace std;

//dinh nghia lop cha Car
class Car {
    protected:          //thuoc tinh protected co the truy nhap tu lop con
        string brand;
        string model;
        int year;
    
    public: 
        //constructor cua lop person
        Car(string carBrand, string carModel, int carYear)
        {
            brand = carBrand;
            model = carModel;
            year = carYear;
        }

        //phuong thuc in thong tin cua lop car
        void displayInfor() const{
            cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
        }
};

//dinh nghia lop con ElectricCar ke thua tu Car
class ElectricCar : public Car {
    private: 
        string batteryCapacity;

    public:
    //Constructor cua lop ElectricCar
    ElectricCar(string electricBrand, string electricModel, int electricYear, string electricBatteryCapacity) : Car(electricBrand, electricModel, electricYear)     //goi constructor lop cha Car
    {
        batteryCapacity = electricBatteryCapacity;
    }

    //phuong thuc in thong in cua lop ElectricCar
    void displayElectricCarInfo() const{
        displayInfor();
        cout << "Battery: " << batteryCapacity << endl;
    }
};

int main()
{
    //tao doi tuong ElectricCar
    ElectricCar electricCar1("Vinfast", "VF8",2022,"87%");

    //in thong tin ElectricCar
    electricCar1.displayElectricCarInfo();

    cout << endl;
    return 0;
}