#include <iostream>
using namespace std;

bool checkAscending(int num[]){
	for (int i = 0; i < 8; i++) {
		if (i + 1 != num[i])
			return false;
	}

	return true;
}

bool checkDescending(int num[]) {
	int i = 0;
	for (int j = 7; j >= 0; j--) {
		if (num[i] != j + 1) {
			return false;
		}
		i++;
	}

	return true;
}

int main(void)
{
	int num[8] = { 0 };

	for (int i = 0; i < 8; i++)
		cin >> num[i];

	if (checkAscending(num) == true)
		cout << "ascending" << endl;
	else if (checkDescending(num) == true)
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;

	return 0;
}