/*
================================================================================
Bài 01: Viết chương trình nhập vào 3 số nguyên a,b,c. Tính tổng và tích của 3 số
nguyên đó.  
================================================================================
*/
#include <iostream>

using namespace std;

// Hàm tính tổng của 3 số nguyên
long long tinhTong(long long a, long long b, long long c) {
    return a + b + c;
}

// Hàm tính tích của 3 số nguyên
long long tinhTich(long long a, long long b, long long c) {
    return a * b * c;
}

// Hàm nhập dữ liệu
void nhapSo(long long &a, long long &b, long long &c) {
    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << "Nhap so nguyen b: ";
    cin >> b;
    cout << "Nhap so nguyen c: ";
    cin >> c;
}

// Hàm hiển thị kết quả
void hienThiKetQua(long long tong, long long tich) {
    cout << "Tong cua 3 so nguyen: " << tong << endl;
    cout << "Tich cua 3 so nguyen: " << tich << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b, c;

    // Nhập số nguyên
    nhapSo(a, b, c);

    // Tính toán
    long long tong = tinhTong(a, b, c);
    long long tich = tinhTich(a, b, c);

    // Hiển thị kết quả
    hienThiKetQua(tong, tich);

    return 0;
}
