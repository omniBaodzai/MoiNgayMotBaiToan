/*
================================================================================
Bài 10: Viết chương trình nhập vào 1 cạnh a của 1 hình vuông. Tính và xuất ra
chu vi, diện tích và độ dài đường chéo của hình vuông đó . 
================================================================================
*/
#include <iostream>
#include <cmath> // Thư viện để dùng sqrt
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    float a;
    
    // Nhập cạnh hình vuông
    cout << "Nhap canh a cua hinh vuong: ";
    cin >> a;

    // Tính chu vi, diện tích và độ dài đường chéo
    float chuVi = 4 * a;
    float dienTich = a * a;
    float duongCheo = a * sqrt(2);

    // Hiển thị kết quả
    cout << "Chu vi: " << chuVi << endl;
    cout << "Dien tich: " << dienTich << endl;
    cout << "Duong cheo: " << duongCheo << endl;

    return 0;
}
