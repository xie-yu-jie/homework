#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

void change(int*& arr, int size, int new_size, int add)
{

	int* new_arr = new int[new_size];//�s�W�s�j�p
	int* repeat = arr;//�Narr���Ф��e���ʲM��
	copy(arr, arr + size, new_arr);
	cout << "��J�n�s�W���e : " << endl;
	for (int i = size; i < size+add; i++)
	{
		cin >> *(new_arr + i);//�s�W�s���e
	}
	delete[] repeat;//���^
	arr = new_arr;
}

int main()
{
	int size, add_size, n, new_n;
	cout << "��Jsize : ";
	cin >> size; 
	cout << "��J " << size << "�ӼƦr:" << endl;
	for(int i=0; ; i++)
	{
		n = pow(2, i);
		if (n > size)
		{
			break;
		}
	}
	int* arr = new int[n];//�ץ����Фj�p��2������

	for (int i = 0; i < size; i++)
	{
		cin >> *(arr+i);//��J���e
	}

	cout << "��J�n�s�W�X�ӼƦr : ";
	cin >> add_size;
	int new_size = size + add_size;//�s�W�j�p
	for (int i = 0; ; i++)
	{
		new_n = pow(2, i);
		if (new_n > new_size)
		{
			break;
		}
	}
	change(arr, size, new_n, add_size);
	for (int i = 0; i < new_n; i++)
	{
		cout << *(arr + i);//�L�X���а}�C���e
	}
	return 0;
}