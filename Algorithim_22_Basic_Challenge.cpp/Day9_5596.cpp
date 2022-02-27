#include <iostream>
using namespace std;

int main(void)
{
	int mkScore[4] = { 0 };
	int msScore[4] = { 0 };
	int mkScore_sum = 0;
	int msScore_sum = 0;

	for (int i = 0; i < 4; i++) {
		cin >> mkScore[i];
		mkScore_sum += mkScore[i];
	}
		

	for (int i = 0; i < 4; i++) {
		cin >> msScore[i];
		msScore_sum += msScore[i];
	}

	if (mkScore_sum > msScore_sum)
		cout << mkScore_sum;
	else if (mkScore_sum < msScore_sum)
		cout << msScore_sum;
	else
		cout << mkScore_sum;

	return 0;
}