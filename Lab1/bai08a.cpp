/*
================================================================================
Bài 8: Viết chương trình nhập vào số Km đã đi của 1 xe taxi. Tính tổng tiền phải
trả cho quãng đường đó. Biết rằng: Km đầu tiên giá: 15000đ/Km. Từ Km 2 trở đi giá
12000đ/Km. Thuế giá trị gia tăng: 10% trên tổng tiền trả
================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    float soKm;
    cout << "Nhap so Km da di: ";
    cin >> soKm;

    float tongTien = 0.0;

    // Tính tổng tiền trước thuế
    if (soKm <= 1) {
        tongTien = 15000 * soKm;
    } else {
        tongTien = 15000 + 12000 * (soKm - 1);
    }

    // Tính thuế VAT
    float VAT = tongTien * 0.1;

    // Tổng tiền phải trả
    float tongTienCuoi = tongTien + VAT;

    // Hiển thị kết quả
    cout << "Tong tien truoc thue: " << tongTien << " VND" << endl;
    cout << "Tien thue VAT: " << VAT << " VND" << endl;
    cout << "Tong tien phai tra: " << tongTienCuoi << " VND" << endl;

    return 0;
}

