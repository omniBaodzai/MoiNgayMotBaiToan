/*
=====================================================================================================================================================================
Bài 6: Đề bài:
Hàm ceil: làm tròn lên số nguyên gần nhất
Hàm floor: làm tròn xuống số nguyên gần nhất
Hàm round: làm tròn số nguyên phụ thuộc vào phần thập phân.
Cho số thực X nhiệm vụ của bạn là sử dụng 3 hàm trên để tìm:
- Số nguyên nhỏ hơn gần X nhất
- Số nguyên lớn hơn gần X nhất, 
- Số nguyên gần X nhất.
=====================================================================================================================================================================
- Lưu ý: 
+) Nên nhớ hàm ceil, floor, round trả về số double
+) Nếu các bạn in ra kết quả hàm ceil, round, floor đối với số nhỏ thì không vấn
đề gì nhưng với số lớn nó có thể xuất hiện số 0 ở sau.
+) Ví dụ cout << ceil(1000000) << endl;
=> kết quả in ra sẽ là 1000000.0
+) Bạn cần in ra số nguyên nên không được in trực tiếp giá trị của 3 hàm này, nó sẽ
là số thực.
=====================================================================================================================================================================
- Input Format:
Dòng duy nhất chứa số thực X
=====================================================================================================================================================================
- Constraints:
1 <= X <= 10^6;
=====================================================================================================================================================================
- Output Format:
In ra 3 số trên 3 dòng
=====================================================================================================================================================================
- Sample Input 0:
3.59
=====================================================================================================================================================================
- Sample Output 0:
3
4
4
=====================================================================================================================================================================
- Sample Input 1:
5.58
=====================================================================================================================================================================
- Sample Output 1:
5
6
6
=====================================================================================================================================================================
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double x; 
    cin >> x;

    cout << (int)floor(x) << "\n";
    cout << (int)ceil(x) << "\n";
    cout << (int)round(x);

    return 0;
}