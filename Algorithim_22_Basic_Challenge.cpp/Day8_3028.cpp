#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int A = 1, B = 0, C = 0;

	string mix;

	cin >> mix;

	if (mix.front() == 'A') {
		B = 1;
		A = 0;
		C = 0;
		if (mix.back() == 'A') {
			A = 1;
			B = 0;
			C = 0;
		}
		else if (mix.back() == 'B') {
			C = 1;
			A = 0;
			B = 0;
		}
	}
	else if (mix.front() == 'C') {
		C = 1;
		A = 0;
		B = 0;
		if (mix.back() == 'B') {
			B = 1;
			A = 0;
			C = 0;
		}

		else if (mix.back() == C) {
			A = 1;
			B = 0;
			C = 0;
		}
	}

	if (A == 1)
		cout << "1";
	else if (B == 1)
		cout << "2";
	else if (C == 1)
		cout << "3";

	return 0;
}