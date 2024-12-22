/*
================================================================================
Bài 03: Viết chương trình nhập vào bán kính r của một hình tròn. Tính chu vi và
diện tích của  hình tròn đó.
================================================================================
*/
#include <iostream>
#include <iomanip>  // Thư viện cần thiết để setprecision

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const double PI = 3.14159;
    double r; 
    cin >> r;

    // Kiểm tra bán kính hợp lệ
    if (r <= 0) {
        cout << "Ban kinh phai lon hon 0" << endl;
        return 1;
    }

    // In chu vi và diện tích với 2 chữ số thập phân
    cout << fixed << setprecision(2) << 2 * PI * r << "\n";
    cout << fixed << setprecision(2) << PI * r * r << "\n";

    return 0;
}
