/*
================================================================================
Bài 6: Viết chương trình nhập tọa độ 2 điểm A,B trên mặt phằng Descartes.
Tính độ dài vectơ AB.  
================================================================================
*/
#include <iostream>
#include <cmath> // Thư viện để dùng hàm sqrt
using namespace std;

// Hàm nhập tọa độ
void nhapToaDo(float &x, float &y) {
    cin >> x >> y;
}

// Hàm tính độ dài vector AB
float tinhDoDai(float xA, float yA, float xB, float yB) {
    float dx = xB - xA; // Hiệu tọa độ x
    float dy = yB - yA; // Hiệu tọa độ y
    return sqrt(dx * dx + dy * dy); // Tính độ dài
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    float xA, yA, xB, yB;

    // Nhập tọa độ điểm A và B
    cout << "Nhap toa do diem A (xA, yA): ";
    nhapToaDo(xA, yA);
    cout << "Nhap toa do diem B (xB, yB): ";
    nhapToaDo(xB, yB);

    // Tính độ dài vector AB
    float doDai = tinhDoDai(xA, yA, xB, yB);

    // Hiển thị kết quả
    cout << "Do dai vector AB la: " << doDai << endl;

    return 0;
}
