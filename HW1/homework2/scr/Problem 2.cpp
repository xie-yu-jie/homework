#include <iostream>
using namespace std;

void printSubset(char set[], bool include[], int size) {
    cout << "{ ";
    for (int i = 0; i < size; i++) {   //�L�X�r�� 
        if (include[i])
            cout << set[i] << " ";
    }
    cout << "}" << endl;
}

// ���j�ͦ� powerset
void generatePowerset(char set[], bool include[], int size, int index) {
    if (index == size) {
        printSubset(set, include, size);
        return;
    }

    // ���]�A��e���� ���p��0�|�ͦ��l��{}�B{b}�B {c}�B{b c}
    include[index] = false; 
    generatePowerset(set, include, size, index + 1 );

    // �]�A��e�����A���p��0�|�ͦ��l��{a}�B{a b}�B {a c}�B{a b c}
    include[index] = true;
    generatePowerset(set, include, size, index + 1);
}

int main() {
    char set[] = {'a', 'b', 'c'};
    int size = 3;
    bool include[3]; // �ΨӰO���C�Ӥ����O�_�b�l����

    cout << "Powerset of {a, b, c}:" << endl;
    generatePowerset(set, include, size, 0);

    return 0;
}
