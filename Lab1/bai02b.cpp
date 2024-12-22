/*
================================================================================
Bài 02: Viết chương trình nhập vào 2 cạnh a, b của 1 hình chữ nhật. Tính chu vi
và diện tích của  hình chữ nhật đó. 
================================================================================ 
*/
#include <iostream>
#include <iomanip>  // Thư viện cần thiết cho setprecision

using namespace std;

// Hàm tính chu vi của hình chữ nhật
double tinhChuVi(double a, double b) {
    return (a + b) * 2;
}

// Hàm tính diện tích của hình chữ nhật
double tinhDienTich(double a, double b) {
    return a * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double a, b;
    cin >> a >> b;
    
    // Kiểm tra chiều dài và chiều rộng
    if (a <= 0 || b <= 0) {
        cout << "Chieu dai va chieu rong phai lon hon 0." << endl;
        return 0;  // Dừng chương trình nếu nhập sai
    }
    
    // Gọi các hàm tính chu vi và diện tích
    double chuVi = tinhChuVi(a, b);
    double dienTich = tinhDienTich(a, b);
    
    // Định dạng kết quả hiển thị với 2 chữ số thập phân
    cout << fixed << setprecision(2) << chuVi << "\n" << dienTich << "\n";
    
    return 0;
}
