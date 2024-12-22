/*
================================================================================
Bài 7: Viết chương trình nhập tọa độ 3 đỉnh A, B, C của 1 tam giác trên mặt phẳng
Descartes. Tính chu vi và diện tích của tam giác đó.
================================================================================
*/
#include <iostream>
#include <cmath> // Thư viện để dùng sqrt
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Nhập tọa độ 3 đỉnh A, B, C
    float xA, yA, xB, yB, xC, yC;
    cout << "Nhap toa do diem A (xA, yA): ";
    cin >> xA >> yA;
    cout << "Nhap toa do diem B (xB, yB): ";
    cin >> xB >> yB;
    cout << "Nhap toa do diem C (xC, yC): ";
    cin >> xC >> yC;

    // Tính độ dài các cạnh
    float AB = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    float BC = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));
    float CA = sqrt(pow(xA - xC, 2) + pow(yA - yC, 2));

    // Tính chu vi
    float chuVi = AB + BC + CA;

    // Tính diện tích (công thức Heron)
    float p = chuVi / 2; // Nửa chu vi
    float dienTich = sqrt(p * (p - AB) * (p - BC) * (p - CA));

    // Hiển thị kết quả
    cout << "Chu vi tam giac la: " << chuVi << endl;
    cout << "Dien tich tam giac la: " << dienTich << endl;

    return 0;
}
