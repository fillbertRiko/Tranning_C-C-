/*
### Bài tập thực hành:

1. **Tạo một class `Car`**:
   - Tạo các thuộc tính `private` như: `brand`, `model`, `year`.
   - Tạo các phương thức getter và setter cho các thuộc tính này.
   - Tạo phương thức `displayInfo` để in thông tin xe.
   - Tạo đối tượng `Car` trong hàm `main` và thực hiện các thao tác cập nhật thông tin và in ra màn hình.
*/
#include <iostream>
using namespace std;

class Car
{
    private:
        string brand;
        string model;
        int year;

    public: 
        //tao constructor
        Car(string brandName, string modelName, int yearOfCar)
        {
            brand = brandName;
            model = modelName;
            year = yearOfCar;
        }

        //phuong thuc public-getter cho thuoc tinh
        string getBrandName() const{
            return brand;
        }

        string getModelName() const{
            return model;
        }

        int getYear() const{
            return year;
        }

        //phuong thuc public-setter cho cac thuoc tinh
        void setBrandName(string newBrandName)
        {
            brand = newBrandName;
        }

        void setModelName(string newModelName)
        {
            model = newModelName;
        }

        void setYear(int newYearOfCar)
        {
            year = newYearOfCar;
        }

        //phuong thuc public - in thong tin Car
        void displayInfo() const
        {
            cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
        }
};

int main()
{
    //tao doi tuong Car
    Car car1("Toyota", "SUV", 2016);

    //In thong tin ban dau cua doi tuong
    car1.displayInfo();

    //cap nhat ten doi tuong
    car1.setBrandName("Poscher");
    car1.setModelName("Taycan-S");
    car1.setYear(2020);

    //in thong tin sau khi cap nhat
    car1.displayInfo();
    
    return 0;
}