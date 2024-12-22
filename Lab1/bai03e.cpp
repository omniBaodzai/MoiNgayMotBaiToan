/*
================================================================================
Bài 03: Viết chương trình nhập vào bán kính r của một hình tròn. Tính chu vi và
diện tích của  hình tròn đó.
================================================================================
*/
#include <iostream>
#include <cmath>
using namespace std;

// Hàm nhập bán kính
void nhapBanKinh(double &r) {
    cout << "Nhap ban kinh r: ";
    cin >> r;
}

// Hàm tính chu vi
double tinhChuVi(double r) {
    return 2 * M_PI * r;
}

// Hàm tính diện tích
double tinhDienTich(double r) {
    return M_PI * r * r;
}

// Hàm hiển thị kết quả
void hienThiKetQua(double chuVi, double dienTich) {
    cout << "Chu vi hinh tron: " << chuVi << endl;
    cout << "Dien tich hinh tron: " << dienTich << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double r;

    // Nhập bán kính
    nhapBanKinh(r);

    // Tính toán
    double chuVi = tinhChuVi(r);
    double dienTich = tinhDienTich(r);

    // Hiển thị kết quả
    hienThiKetQua(chuVi, dienTich);

    return 0;
}
