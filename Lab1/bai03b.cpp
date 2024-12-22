/*
================================================================================
Bài 03: Viết chương trình nhập vào bán kính r của một hình tròn. Tính chu vi và
diện tích của  hình tròn đó.
================================================================================
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double r; 
    cin >> r;

    if (r <= 0) {
        cout << "Ban kinh phai lon hon 0" << endl;
        return 1;
    }

    cout << 2 * M_PI * r << "\n";
    cout << M_PI * r * r << "\n";

    return 0;
}