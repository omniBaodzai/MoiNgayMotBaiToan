/*
================================================================================
Bài 9: Viết chương trình nhập vào một số nguyên N (4 chữ số). Tính tổng chữ số?  
Ví dụ: N=3456 Tổng = 18.   
================================================================================
*/
#include <iostream>
using namespace std;

// Hàm kiểm tra N có phải là số 4 chữ số
bool kiemTraSoHopLe(int N) {
    return N >= 1000 && N <= 9999;
}

// Hàm tính tổng các chữ số của N
int tinhTongChuSo(int N) {
    int tong = 0;
    while (N > 0) {
        tong += N % 10; // Lấy chữ số cuối cùng
        N /= 10;        // Bỏ chữ số cuối cùng
    }
    return tong;
}

// Hàm nhập N
int nhapSo() {
    int N;
    cout << "Nhap so nguyen N (4 chu so): ";
    cin >> N;
    return N;
}

// Hàm hiển thị kết quả
void hienThiKetQua(int tong) {
    cout << "Tong cac chu so cua N = " << tong << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Nhập N
    int N = nhapSo();

    // Kiểm tra số hợp lệ
    if (!kiemTraSoHopLe(N)) {
        cout << "N phai la so nguyen co 4 chu so!" << endl;
        return 1;
    }

    // Tính tổng các chữ số
    int tong = tinhTongChuSo(N);

    // Hiển thị kết quả
    hienThiKetQua(tong);

    return 0;
}
