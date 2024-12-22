/*
================================================================================
Bài 10: Viết chương trình nhập vào 1 cạnh a của 1 hình vuông. Tính và xuất ra
chu vi, diện tích và độ dài đường chéo của hình vuông đó  
================================================================================
*/
#include <iostream>
#include <cmath> // Thư viện để dùng sqrt
using namespace std;

// Hàm nhập cạnh của hình vuông
float nhapCanh() {
    float a;
    cout << "Nhap canh a cua hinh vuong: ";
    cin >> a;
    return a;
}

// Hàm tính chu vi
float tinhChuVi(float a) {
    return 4 * a;
}

// Hàm tính diện tích
float tinhDienTich(float a) {
    return a * a;
}

// Hàm tính độ dài đường chéo
float tinhDuongCheo(float a) {
    return a * sqrt(2);
}

// Hàm hiển thị kết quả
void hienThiKetQua(float chuVi, float dienTich, float duongCheo) {
    cout << "Chu vi: " << chuVi << endl;
    cout << "Dien tich: " << dienTich << endl;
    cout << "Duong cheo: " << duongCheo << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Nhập cạnh hình vuông
    float a = nhapCanh();

    // Tính toán các giá trị
    float chuVi = tinhChuVi(a);
    float dienTich = tinhDienTich(a);
    float duongCheo = tinhDuongCheo(a);

    // Hiển thị kết quả
    hienThiKetQua(chuVi, dienTich, duongCheo);

    return 0;
}

