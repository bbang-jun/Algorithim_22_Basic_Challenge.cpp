#include <iostream>
using namespace std;

int main(void)
{
	int date_num = 0;
	int car_num[5] = { 0 };
	int catch_count = 0;

	cin >> date_num;

	for (int i = 0; i < 5; i++)
		cin >> car_num[i];

	if (date_num >= 0 && date_num <= 9) {
		for (int i = 0; i < 5; i++) {
			if (car_num[i] == date_num) {
				catch_count++;
			}
		}
	}

	cout << catch_count;

	return 0;
}