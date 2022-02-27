#include <iostream>
using namespace std;

int main(void)
{
	int A, B = 0;

	cin >> A >> B;

	if (A > B)
		cout << ">";
	else if (A < B)
		cout << "<";
	else
		cout << "==";

	return 0;
}