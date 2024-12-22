/*
=====================================================================================================================================================================
Bài 20: Đề bài:
Cho số N, bạn hãy in ra số N với 6 chữ số, nếu N không đủ 6 chữ số thì tiến hành
chèn 0 và dấu # vào đầu cho đủ 6 chữ số.
Cú pháp để in ra 1 số nguyên n với độ rộng K, điền đầy ký tự C vào đầu nếu không
đủ K chữ số
=====================================================================================================================================================================
- Gợi ý:
|#include <iomanip>                         |
|cout << setw(K) << setfill(C) << n << endl;|
=====================================================================================================================================================================
- Đầu vào:
Dòng duy nhất chứa số N
=====================================================================================================================================================================
- Ràng buộc: 
0 <= N <= 10^6
=====================================================================================================================================================================
- Đầu ra:
Dòng 1 in ra N với số 0 được chèn vào trước
Dòng 2 in ra N với dấu # được chèn vào trước
=====================================================================================================================================================================
- Input 01:
850
=====================================================================================================================================================================
- Output 01:
000850
###850
=====================================================================================================================================================================
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;

    cout << setw(6) << setfill('0') << n << "\n";
    cout << setw(6) << setfill('#') << n;

    return 0;
}

/*
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << setfill('0') << setw(6) << n << endl;
    cout << setfill('#') << setw(6) << n << endl;
    return 0;
}
*/