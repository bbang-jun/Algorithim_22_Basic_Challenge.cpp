#include<iostream>
using namespace std;

int main() {

	int a, b, c = 0;
	int t;
	cin >> t;

	if (t % 10 != 0) cout << "-1";
	else {
		a = t / 300;
		b = (t % 300) / 60;
		c = ((t % 300) % 60) / 10;
		cout << a << " " << b << " " << c;
	}

	return 0;

}