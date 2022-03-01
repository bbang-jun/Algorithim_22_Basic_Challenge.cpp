#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c = 0;

	cin >> a >> b >> c;

	int sum = a + b + c;

	if (sum != 180)
		cout << "Error" << endl;
	else {
		if (a == b && b == c && c == a)
			cout << "Equilateral" << endl;
		else if (sum = 180 && a != b && b != c && c != a)
			cout << "Scalene" << endl;
		else
			cout << "Isosceles" << endl;
	}

	return 0;
}