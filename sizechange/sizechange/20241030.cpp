#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

void change(int*& arr, int size, int new_size, int add)
{

	int* new_arr = new int[new_size];//新增新大小
	int* repeat = arr;//將arr指標內容移動清空
	copy(arr, arr + size, new_arr);
	cout << "輸入要新增內容 : " << endl;
	for (int i = size; i < size+add; i++)
	{
		cin >> *(new_arr + i);//新增新內容
	}
	delete[] repeat;//收回
	arr = new_arr;
}

int main()
{
	int size, add_size, n, new_n;
	cout << "輸入size : ";
	cin >> size; 
	cout << "輸入 " << size << "個數字:" << endl;
	for(int i=0; ; i++)
	{
		n = pow(2, i);
		if (n > size)
		{
			break;
		}
	}
	int* arr = new int[n];//修正指標大小為2的次方

	for (int i = 0; i < size; i++)
	{
		cin >> *(arr+i);//輸入內容
	}

	cout << "輸入要新增幾個數字 : ";
	cin >> add_size;
	int new_size = size + add_size;//新增大小
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
		cout << *(arr + i);//印出指標陣列內容
	}
	return 0;
}