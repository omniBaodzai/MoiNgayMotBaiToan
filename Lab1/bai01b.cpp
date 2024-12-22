/*
================================================================================
Bài 01: Viết chương trình nhập vào 3 số nguyên a,b,c. Tính tổng và tích của 3 số
nguyên đó.  
================================================================================
*/
#include <iostream>

using namespace std;

// Hàm tính tổng của ba số
long long tong(long long a, long long b, long long c) {
    return a + b + c;
}

// Hàm tính tích của ba số
long long tich(long long a, long long b, long long c) {
    return a * b * c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    cin >> a >> b >> c;

    // Gọi các hàm tính tổng và tích
    cout << tong(a, b, c) << "\n";
    cout << tich(a, b, c) << "\n";
    
    return 0;
}
