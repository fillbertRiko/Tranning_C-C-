//
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Nhap vao mot so nguyen duong co hai chu so: ";
    cin >> num;

    if (num < 10 || num > 99) {
        cout << "So nhap vao khong hop le. Vui long nhap lai.";
        return 1;
    }

    string hangChuc[] = { "", "muoi", "hai muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi" };
    string hangDonVi[] = { "", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin" };

    int chuc = num / 10;
    int donVi = num % 10;

    cout << "So doc cua " << num << " la: " << hangChuc[chuc] << " " << hangDonVi[donVi];

    return 0;
}
