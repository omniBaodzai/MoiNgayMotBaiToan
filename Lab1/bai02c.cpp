/*
================================================================================
Bài 02: Viết chương trình nhập vào 2 cạnh a, b của 1 hình chữ nhật. Tính chu vi
và diện tích của  hình chữ nhật đó. 
================================================================================ 
*/
#include <iostream>
using namespace std;

// Hàm kiểm tra tính hợp lệ của a và b
bool kiemTraHopLe(double a, double b) {
    return (a > 0 && b > 0);
}

// Hàm tính chu vi hình chữ nhật
double tinhChuVi(double a, double b) {
    return 2 * (a + b);
}

// Hàm tính diện tích hình chữ nhật
double tinhDienTich(double a, double b) {
    return a * b;
}

// Hàm nhập dữ liệu
void nhapCanh(double &a, double &b) {
    cout << "Nhap do dai canh a: ";
    cin >> a;
    cout << "Nhap do dai canh b: ";
    cin >> b;
}

// Hàm hiển thị kết quả
void hienThiKetQua(double chuVi, double dienTich) {
    cout << "Chu vi hinh chu nhat: " << chuVi << endl;
    cout << "Dien tich hinh chu nhat: " << dienTich << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b;

    // Nhập các cạnh
    nhapCanh(a, b);

    // Kiểm tra tính hợp lệ
    if (!kiemTraHopLe(a, b)) {
        cout << "Canh a va b phai lon hon 0!" << endl;
        return 1;
    }

    // Tính toán
    double chuVi = tinhChuVi(a, b);
    double dienTich = tinhDienTich(a, b);

    // Hiển thị kết quả
    hienThiKetQua(chuVi, dienTich);

    return 0;
}
