#include <iostream>
using namespace std;

void printSubset(char set[], bool include[], int size) {
    cout << "{ ";
    for (int i = 0; i < size; i++) {   //印出字母 
        if (include[i])
            cout << set[i] << " ";
    }
    cout << "}" << endl;
}

// 遞迴生成 powerset
void generatePowerset(char set[], bool include[], int size, int index) {
    if (index == size) {
        printSubset(set, include, size);
        return;
    }

    // 不包括當前元素 假如為0會生成子集{}、{b}、 {c}、{b c}
    include[index] = false; 
    generatePowerset(set, include, size, index + 1 );

    // 包括當前元素，假如為0會生成子集{a}、{a b}、 {a c}、{a b c}
    include[index] = true;
    generatePowerset(set, include, size, index + 1);
}

int main() {
    char set[] = {'a', 'b', 'c'};
    int size = 3;
    bool include[3]; // 用來記錄每個元素是否在子集中

    cout << "Powerset of {a, b, c}:" << endl;
    generatePowerset(set, include, size, 0);

    return 0;
}
