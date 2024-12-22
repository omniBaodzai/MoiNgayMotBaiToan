/*
================================================================================
Bài 6: Viết chương trình nhập tọa độ 2 điểm A,B trên mặt phằng Descartes.
Tính độ dài vectơ AB.  
================================================================================
*/
#include <iostream>
#include <cmath> // Thư viện để dùng hàm sqrt
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Nhập tọa độ của điểm A và B
    float xA, yA, xB, yB;
    cout << "Nhap toa do diem A (xA, yA): ";
    cin >> xA >> yA;
    cout << "Nhap toa do diem B (xB, yB): ";
    cin >> xB >> yB;

    // Tính độ dài vector AB
    float dx = xB - xA; // Hiệu tọa độ x
    float dy = yB - yA; // Hiệu tọa độ y
    float doDai = sqrt(dx * dx + dy * dy); // Tính độ dài

    // Hiển thị kết quả
    cout << "Do dai vector AB la: " << doDai << endl;

    return 0;
}
