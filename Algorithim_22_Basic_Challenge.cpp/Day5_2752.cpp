#include <iostream>
using namespace std;

int main(void) {
	int num[3] = { 0 };
	int temp = 0;

	for (int i = 0; i < 3; i++)
		cin >> num[i];

	if (num[0] > num[1]) {
		temp = num[0];
		num[0] = num[1];
		num[1] = temp;
	}
	if (num[1] > num[2]) {
		temp = num[1];
		num[1] = num[2];
		num[2] = temp;
	}
	if (num[0] > num[1]) {
		temp = num[0];
		num[0] = num[1];
		num[1] = temp;
	}


	for (int i = 0; i < 3; i++)
		cout << num[i] << " ";

	return 0;
}