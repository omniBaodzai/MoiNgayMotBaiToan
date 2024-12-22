/*
================================================================================
Bài 05: Viết chương trình nhập vào điểm thi và hệ số của 3 môn Toán, Lý, Hóa của
một sinh viên. Tính điểm trung bình của sinh viên đó.  
================================================================================
*/
#include <iostream>
using namespace std;

// Hàm nhập điểm và hệ số
void nhapDiemVaHeSo(float &diem, int &heSo, const string &mon) {
    cout << "Nhap diem " << mon << ": ";
    cin >> diem;
    cout << "Nhap he so " << mon << ": ";
    cin >> heSo;
}

// Hàm tính điểm trung bình
float tinhDiemTrungBinh(float diemToan, int heSoToan, float diemLy, int heSoLy, float diemHoa, int heSoHoa) {
    float tongDiem = diemToan * heSoToan + diemLy * heSoLy + diemHoa * heSoHoa;
    int tongHeSo = heSoToan + heSoLy + heSoHoa;
    return tongDiem / tongHeSo;
}

// Hàm chính
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float diemToan, diemLy, diemHoa;
    int heSoToan, heSoLy, heSoHoa;

    // Nhập điểm và hệ số cho từng môn
    nhapDiemVaHeSo(diemToan, heSoToan, "Toan");
    nhapDiemVaHeSo(diemLy, heSoLy, "Ly");
    nhapDiemVaHeSo(diemHoa, heSoHoa, "Hoa");

    // Tính điểm trung bình
    float diemTrungBinh = tinhDiemTrungBinh(diemToan, heSoToan, diemLy, heSoLy, diemHoa, heSoHoa);

    // Xuất kết quả
    cout << "Diem trung binh cua sinh vien la: " << diemTrungBinh << endl;

    return 0;
}
