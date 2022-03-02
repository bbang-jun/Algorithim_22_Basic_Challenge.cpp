#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;

	cin >> a >> b >> c;

	int sum = a + b + c;

	if (sum >= 100)
		cout << "OK" << endl;
	else {
		if (a < b && a < c)
			cout << "Soongsil" << endl;
		else if (b < a && b < c)
			cout << "Korea" << endl;
		else if (c < a && c < b)
			cout << "Hanyang" << endl;
	}

	return 0;
}