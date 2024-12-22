/*
================================================================================
Bài 04: Viết chương trình nhập vào 2 giá trị số lượng, đơn giá. Tính tiền và thuế
giá trị gia tăng phải trả, biết:  
a. Tiền = số lượng * đơn giá  
b. Thuế giá trị gia tăng = 10% tiền 
================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long soLuong;
    double donGia;
    
    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap don gia: ";
    cin >> donGia;

    if (soLuong <= 0 || donGia <= 0) {
        cout << "So luong va don gia phai lon hon 0." << endl;
    } else {
        double tien = soLuong * donGia;
        double thueVAT = tien * 0.10;

        cout << "Tien: " << tien << endl;
        cout << "Thue gia tri tang (10%): " << thueVAT << endl;
    }

    return 0;
}
