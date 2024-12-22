/*
================================================================================
Bài 03: Viết chương trình nhập vào bán kính r của một hình tròn. Tính chu vi và
diện tích của  hình tròn đó.
================================================================================
*/
#include <iostream>
#include <numbers>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    double r; 
    std::cin >> r;

    if (r <= 0) {
        std::cout << "Ban kinh phai lon hon 0!";
        return 1;
    }

    std::cout << 2 * std::numbers::pi * r << "\n";
    std::cout << std::numbers::pi * r * r << "\n";

    return 0;
}