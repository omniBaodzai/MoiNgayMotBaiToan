/*
================================================================================
Bài 8: Viết chương trình nhập vào số Km đã đi của 1 xe taxi. Tính tổng tiền phải
trả cho quãng đường đó. Biết rằng: Km đầu tiên giá: 15000đ/Km. Từ Km 2 trở đi giá
12000đ/Km. Thuế giá trị gia tăng: 10% trên tổng tiền trả
================================================================================
*/
#include <iostream>
using namespace std;

// Hàm nhập số Km
float nhapSoKm() {
    float soKm;
    cout << "Nhap so Km da di: ";
    cin >> soKm;
    return soKm;
}

// Hàm tính tổng tiền trước thuế
float tinhTongTien(float soKm) {
    if (soKm <= 1) {
        return 15000 * soKm;
    } else {
        return 15000 + 12000 * (soKm - 1);
    }
}

// Hàm tính thuế VAT
float tinhVAT(float tongTien) {
    return tongTien * 0.1;
}

// Hàm tính tổng tiền phải trả
float tinhTongTienCuoi(float tongTien, float VAT) {
    return tongTien + VAT;
}

// Hàm hiển thị kết quả
void hienThiKetQua(float tongTien, float VAT, float tongTienCuoi) {
    cout << "Tong tien truoc thue: " << tongTien << " VND" << endl;
    cout << "Tien thue VAT: " << VAT << " VND" << endl;
    cout << "Tong tien phai tra: " << tongTienCuoi << " VND" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Nhập số Km
    float soKm = nhapSoKm();

    // Tính toán
    float tongTien = tinhTongTien(soKm);
    float VAT = tinhVAT(tongTien);
    float tongTienCuoi = tinhTongTienCuoi(tongTien, VAT);

    // Hiển thị kết quả
    hienThiKetQua(tongTien, VAT, tongTienCuoi);

    return 0;
}
