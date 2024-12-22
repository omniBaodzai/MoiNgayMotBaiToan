/*
================================================================================
Bài 9: Viết chương trình nhập vào một số nguyên N (4 chữ số). Tính tổng chữ số?  
Ví dụ: N=3456 Tổng = 18.  
================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cout << "Nhap so nguyen N (4 chu so): ";
    cin >> N;

    // Kiểm tra N có phải là số 4 chữ số
    if (N < 1000 || N > 9999) {
        cout << "N phai la so nguyen co 4 chu so!" << endl;
        return 1;
    }

    // Tính tổng các chữ số
    int tong = 0;
    tong += N % 10; // Lấy chữ số hàng đơn vị
    N /= 10;
    tong += N % 10; // Lấy chữ số hàng chục
    N /= 10;
    tong += N % 10; // Lấy chữ số hàng trăm
    N /= 10;
    tong += N % 10; // Lấy chữ số hàng nghìn

    // In kết quả
    cout << "Tong cac chu so cua N = " << tong << endl;

    return 0;
}
