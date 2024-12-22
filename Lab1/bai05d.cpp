/*
================================================================================
Bài 05: Viết chương trình nhập vào điểm thi và hệ số của 3 môn Toán, Lý, Hóa của
một sinh viên. Tính điểm trung bình của sinh viên đó.  
================================================================================
*/
#include <iostream>
#include <iomanip> // Thư viện để định dạng kết quả
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Khai báo số lượng môn học
    const int soMon = 3;

    // Khai báo mảng để lưu điểm và hệ số
    float diem[soMon];
    int heSo[soMon];

    // Nhập điểm và hệ số cho từng môn
    for (int i = 0; i < soMon; ++i) {
        cout << "Nhap diem mon " << i + 1 << ": ";
        cin >> diem[i];
        cout << "Nhap he so mon " << i + 1 << ": ";
        cin >> heSo[i];
    }

    // Tính tổng điểm và tổng hệ số
    float tongDiem = 0;
    int tongHeSo = 0;
    for (int i = 0; i < soMon; ++i) {
        tongDiem += diem[i] * heSo[i];
        tongHeSo += heSo[i];
    }

    // Tính điểm trung bình
    float diemTrungBinh = tongDiem / tongHeSo;

    // Hiển thị kết quả
    cout << fixed << setprecision(2); // Hiển thị với 2 chữ số thập phân
    cout << "Diem trung binh cua sinh vien la: " << diemTrungBinh << endl;

    return 0;
}
