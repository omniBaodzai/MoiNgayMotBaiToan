/*
================================================================================
Bài 04:  Viết chương trình nhập vào 2 giá trị số lượng, đơn giá. Tính tiền và thuế
giá trị gia tăng phải trả, biết:  
a. Tiền = số lượng * đơn giá  
b. Thuế giá trị gia tăng = 10% tiền 
================================================================================
*/
#include <iostream>
#include <iomanip> // Thư viện để điều chỉnh định dạng số

using namespace std;

// Hàm tính tiền
double tinhTien(long long soLuong, double donGia) {
    return soLuong * donGia;
}

// Hàm tính thuế giá trị gia tăng (10%)
double tinhThueGTGT(double tien) {
    return tien * 0.1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Khai báo các biến cần thiết
    long long soLuong;
    double donGia;

    // Nhập số lượng và đơn giá
    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap don gia: ";
    cin >> donGia;

    // Tính tiền và thuế GTGT
    double tien = tinhTien(soLuong, donGia);
    double thueGTGT = tinhThueGTGT(tien);

    // Hiển thị kết quả với định dạng 2 chữ số thập phân
    cout << fixed << setprecision(2); // Cài đặt hiển thị 2 chữ số thập phân
    cout << "Tien = " << tien << endl;
    cout << "Thue gia tri tang (10%) = " << thueGTGT << endl;

    return 0;
}
