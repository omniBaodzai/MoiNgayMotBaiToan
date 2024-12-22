/*
================================================================================
Bài 05: Viết chương trình nhập vào điểm thi và hệ số của 3 môn Toán, Lý, Hóa của
một sinh viên. Tính điểm trung bình của sinh viên đó.  
================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Khai báo các biến để lưu điểm và hệ số
    double diemToan, diemLy, diemHoa;
    int heSoToan, heSoLy, heSoHoa;

    // Nhập điểm và hệ số cho từng môn
    cout << "Nhap diem Toan: ";
    cin >> diemToan;
    cout << "Nhap he so Toan: ";
    cin >> heSoToan;

    cout << "Nhap diem Ly: ";
    cin >> diemLy;
    cout << "Nhap he so Ly: ";
    cin >> heSoLy;

    cout << "Nhap diem Hoa: ";
    cin >> diemHoa;
    cout << "Nhap he so Hoa: ";
    cin >> heSoHoa;

    // Tính tổng điểm và tổng hệ số
    double tongDiem = diemToan * heSoToan + diemLy * heSoLy + diemHoa * heSoHoa;
    int tongHeSo = heSoToan + heSoLy + heSoHoa;

    // Tính điểm trung bình
    double diemTrungBinh = tongDiem / tongHeSo;

    // Xuất kết quả
    cout << "Diem trung binh cua sinh vien la: " << diemTrungBinh << endl;

    return 0;
}
