#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int* array = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> array[i];
	}

	sort(array, array + N);

	for (int j = 0; j < N; j++)
	{
		cout << array[j] << endl;
	}

	delete[] array;

	return 0;
}