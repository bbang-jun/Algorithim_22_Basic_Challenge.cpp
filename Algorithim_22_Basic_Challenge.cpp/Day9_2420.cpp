#include <iostream>
using namespace std;

int main(void)
{
	int N, M, marry;

	cin >> N >> M;

	marry = N - M;

	if (marry < 0)
		marry *= -1;

	cout << marry << endl;

	return 0;
}