/*
================================================================================
Bài 03: Viết chương trình nhập vào bán kính r của một hình tròn. Tính chu vi và
diện tích của  hình tròn đó.
================================================================================
*/
#include <iostream>
#include <iomanip>  // Thư viện cho setprecision
#include <cmath>    // Thư viện cho hằng số Pi (M_PI)
using namespace std;

// Hàm tính chu vi của hình tròn
double tinhChuVi(double r) {
    return 2 * M_PI * r;  // M_PI là hằng số Pi trong thư viện cmath
}

// Hàm tính diện tích của hình tròn
double tinhDienTich(double r) {
    return M_PI * r * r;  // Công thức diện tích hình tròn
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double r;
    cin >> r;  // Nhập bán kính

    if (r <= 0) {
        cout << "Ban kinh phai lon hon 0." << endl;
        return 1;
    }

    // Gọi các hàm tính chu vi và diện tích
    double chuVi = tinhChuVi(r);
    double dienTich = tinhDienTich(r);

    // In kết quả với 2 chữ số thập phân
    cout << fixed << setprecision(2) << chuVi << "\n" << dienTich << "\n";

    return 0;
}
