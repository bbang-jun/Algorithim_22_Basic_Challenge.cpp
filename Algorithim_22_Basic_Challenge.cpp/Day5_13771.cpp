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

	cout << fixed; //fixed를 사용해야 precision을 소수점으로 지정가능
	cout.precision(2); // 소수점 2자리까지 나타내기

	cout << arr[1];

	delete[]arr;

	return 0;
}