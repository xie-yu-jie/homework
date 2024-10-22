#include <iostream>
using namespace std;

int f2(int m, int n) {
    while (true) {
        if (m == 0) {
            return n + 1;  // 如果 m == 0，返回 n + 1
        }
        else if (n == 0) {
            m -= 1;  // 當 n == 0 時，將 m 減 1 並設置 n 為 1
            n = 1;
        }
        else { 
            n = f2(m, n - 1); // m先減一的話數值會改變
            m -= 1;
        }
    }
}

int main() {
    int m, n;
    cout << "輸入 m 和 n: ";
    cin >> m >> n;

    // 非遞迴的 Ackermann 函數
    cout << "非遞迴的Ackermann(" << m << ", " << n << ") = " << f2(m, n) << endl;

    return 0;
}
