
/*
================================================================================
Bài 11: Viết chương trình tính khoảng cách từ điểm A(x, y, z)
tới mặt phẳng: ax + by + cz + d = 0.  
================================================================================
*/
#include <iostream>
#include <cmath> // Thư viện để dùng sqrt và abs
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Nhập tọa độ điểm A
    float x, y, z;
    cout << "Nhap toa do diem A (x, y, z): ";
    cin >> x >> y >> z;

    // Nhập các hệ số của mặt phẳng
    float a, b, c, d;
    cout << "Nhap cac he so cua mat phang (a, b, c, d): ";
    cin >> a >> b >> c >> d;

    // Tính khoảng cách từ điểm A đến mặt phẳng
    float tuSo = abs(a * x + b * y + c * z + d);
    float mauSo = sqrt(a * a + b * b + c * c);
    float khoangCach = tuSo / mauSo;

    // Hiển thị kết quả
    cout << "Khoang cach tu diem A den mat phang la: " << khoangCach << endl;

    return 0;
}
