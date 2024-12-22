/*
=====================================================================================================================================================================
Bài 19: Đề bài:
Cho số thực F, nhiệm vụ của bạn hãy in ra phần thực và phần nguyên của F
=====================================================================================================================================================================
- Đầu vào:
Dòng duy nhất chứa số thực F
=====================================================================================================================================================================
- Ràng buộc:
-10^6 <= F <= 10^6
=====================================================================================================================================================================
- Đầu ra:
Dòng 1 in ra phần nguyên
Dòng 2 in ra phần thực với 2 số sau dấu phẩy
=====================================================================================================================================================================
- Input 01:
9.73
=====================================================================================================================================================================
- Output 01:
9
0.73
=====================================================================================================================================================================
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double f; //Dùng double nếu không sẽ sai test case
    cin >> f;
  
    cout << floor(f) << endl;
    cout << f - floor(f) << endl;
  
    return 0;
}

/* 
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double f;
    cin >> f;
    cout << (int)f << endl;
    cout << f - (int)f << endl;
    return 0;
}
*/