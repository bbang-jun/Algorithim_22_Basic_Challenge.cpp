#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;

	cin >> N;

	float* arr = new float[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	cout << fixed; //fixed�� ����ؾ� precision�� �Ҽ������� ��������
	cout.precision(2); // �Ҽ��� 2�ڸ����� ��Ÿ����

	cout << arr[1];

	delete[]arr;

	return 0;
}