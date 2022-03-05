#include <iostream>

using namespace std;

int main(void)
{
	int input;

	cin >> input;

	for (int i = 1; i <= input; i++) {
		
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}