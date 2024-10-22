#include <iostream>
using namespace std;

int f2(int m, int n) {
    while (true) {
        if (m == 0) {
            return n + 1;  // �p�G m == 0�A��^ n + 1
        }
        else if (n == 0) {
            m -= 1;  // �� n == 0 �ɡA�N m �� 1 �ó]�m n �� 1
            n = 1;
        }
        else { 
            n = f2(m, n - 1); // m����@���ܼƭȷ|����
            m -= 1;
        }
    }
}

int main() {
    int m, n;
    cout << "��J m �M n: ";
    cin >> m >> n;

    // �D���j�� Ackermann ���
    cout << "�D���j��Ackermann(" << m << ", " << n << ") = " << f2(m, n) << endl;

    return 0;
}
