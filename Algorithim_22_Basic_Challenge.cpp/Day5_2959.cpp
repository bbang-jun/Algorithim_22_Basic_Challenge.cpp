#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int arr[4];

	for (int i = 0; i < 4; i++)
		cin >> arr[i];

	sort(arr, arr + 4);

	cout << arr[2] * arr[0];

	return 0;
}