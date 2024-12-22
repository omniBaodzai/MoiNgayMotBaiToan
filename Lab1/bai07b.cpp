/*
================================================================================
Bài 7: Viết chương trình nhập tọa độ 3 đỉnh A, B, C của 1 tam giác trên mặt phẳng
Descartes. Tính chu vi và diện tích của tam giác đó.
================================================================================
*/
#include <iostream>
#include <cmath> // Thư viện để dùng sqrt
using namespace std;

// Hàm nhập tọa độ
void nhapToaDo(float &x, float &y) {
    cin >> x >> y;
}

// Hàm tính độ dài cạnh
float tinhDoDai(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Hàm tính chu vi tam giác
float tinhChuVi(float AB, float BC, float CA) {
    return AB + BC + CA;
}

// Hàm tính diện tích tam giác (Heron)
float tinhDienTich(float AB, float BC, float CA) {
    float p = (AB + BC + CA) / 2; // Nửa chu vi
    return sqrt(p * (p - AB) * (p - BC) * (p - CA));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Nhập tọa độ 3 đỉnh A, B, C
    float xA, yA, xB, yB, xC, yC;
    cout << "Nhap toa do diem A (xA, yA): ";
    nhapToaDo(xA, yA);
    cout << "Nhap toa do diem B (xB, yB): ";
    nhapToaDo(xB, yB);
    cout << "Nhap toa do diem C (xC, yC): ";
    nhapToaDo(xC, yC);

    // Tính độ dài các cạnh
    float AB = tinhDoDai(xA, yA, xB, yB);
    float BC = tinhDoDai(xB, yB, xC, yC);
    float CA = tinhDoDai(xC, yC, xA, yA);

    // Tính chu vi và diện tích
    float chuVi = tinhChuVi(AB, BC, CA);
    float dienTich = tinhDienTich(AB, BC, CA);

    // Hiển thị kết quả
    cout << "Chu vi tam giac la: " << chuVi << endl;
    cout << "Dien tich tam giac la: " << dienTich << endl;

    return 0;
}
