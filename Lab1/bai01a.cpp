/*
================================================================================
Bài 01: Viết chương trình nhập vào 3 số nguyên a,b,c. Tính tổng và tích của 3 số
nguyên đó.  
================================================================================
*/
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    cin >> a >> b >>c;

    cout << a + b + c << "\n";
    cout << a * b * c << "\n";

    return 0;
}
