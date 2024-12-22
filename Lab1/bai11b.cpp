/*
================================================================================
Bài 11: Viết chương trình tính khoảng cách từ điểm A(x, y, z)
tới mặt phẳng: ax + by + cz + d = 0.  
================================================================================
*/
#include <iostream>
#include <cmath> // Thư viện để dùng sqrt và abs
using namespace std;

// Hàm nhập tọa độ của điểm
void nhapToaDoDiem(float &x, float &y, float &z) {
    cin >> x >> y >> z;
}

// Hàm nhập các hệ số của mặt phẳng
void nhapHeSoMatPhang(float &a, float &b, float &c, float &d) {
    cin >> a >> b >> c >> d;
}

// Hàm tính khoảng cách từ điểm đến mặt phẳng
float tinhKhoangCach(float x, float y, float z, float a, float b, float c, float d) {
    float tuSo = abs(a * x + b * y + c * z + d);
    float mauSo = sqrt(a * a + b * b + c * c);
    return tuSo / mauSo;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Nhập tọa độ điểm A
    float x, y, z;
    cout << "Nhap toa do diem A (x, y, z): ";
    nhapToaDoDiem(x, y, z);

    // Nhập hệ số mặt phẳng
    float a, b, c, d;
    cout << "Nhap cac he so cua mat phang (a, b, c, d): ";
    nhapHeSoMatPhang(a, b, c, d);

    // Tính khoảng cách
    float khoangCach = tinhKhoangCach(x, y, z, a, b, c, d);

    // Hiển thị kết quả
    cout << "Khoang cach tu diem A den mat phang la: " << khoangCach << endl;

    return 0;
}
