/*
================================================================================
Bài 02: Viết chương trình nhập vào 2 cạnh a, b của 1 hình chữ nhật. Tính chu vi
và diện tích của  hình chữ nhật đó. 
================================================================================ 
*/
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b;

    // Nhập vào hai cạnh a và b
    cout << "Nhap do dai canh a: ";
    cin >> a;
    cout << "Nhap do dai canh b: ";
    cin >> b;

    // Kiểm tra điều kiện hợp lệ
    if (a <= 0 || b <= 0) {
        cout << "Canh a va b phai lon hon 0!" << endl;
        return 1;
    }

    // Tính chu vi và diện tích
    double chuVi = 2 * (a + b);
    double dienTich = a * b;

    // Hiển thị kết quả
    cout << "Chu vi hinh chu nhat: " << chuVi << endl;
    cout << "Dien tich hinh chu nhat: " << dienTich << endl;

    return 0;
}

