#include <iostream>
using namespace std;

int f(int m, int n) {
    if (m == 0)
    	return n + 1; //在m=0時，回傳n+1  
    else if (m > 0 && n == 0)
        return f(m - 1, 1); //在m>0並且n=0時，m=m-1、n=1再回傳到f副函式 
    else
        return f(m - 1, f(m, n - 1)); //在其他情況時，m=m-1、n=f(m,n-1)再回傳到f副函式}
} 
int main() {
    int m, n;
    cout << "輸入 m 和 n: ";
    cin >> m >> n;

    cout << "遞迴的Ackermann(" << m << ", " << n << ") = " << f(m, n) << endl;

    return 0;
}
