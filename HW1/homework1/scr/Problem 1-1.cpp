#include <iostream>
using namespace std;

int f(int m, int n) {
    if (m == 0)
    	return n + 1; //�bm=0�ɡA�^��n+1  
    else if (m > 0 && n == 0)
        return f(m - 1, 1); //�bm>0�åBn=0�ɡAm=m-1�Bn=1�A�^�Ǩ�f�ƨ禡 
    else
        return f(m - 1, f(m, n - 1)); //�b��L���p�ɡAm=m-1�Bn=f(m,n-1)�A�^�Ǩ�f�ƨ禡}
} 
int main() {
    int m, n;
    cout << "��J m �M n: ";
    cin >> m >> n;

    cout << "���j��Ackermann(" << m << ", " << n << ") = " << f(m, n) << endl;

    return 0;
}
