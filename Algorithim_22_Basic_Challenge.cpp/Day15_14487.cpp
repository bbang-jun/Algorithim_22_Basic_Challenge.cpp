#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int townNum = 0;
	int min = 0;

	cin >> townNum;

	int* cost = new int[townNum];

	for (int i = 0; i < townNum; i++) {
		cin >> cost[i];
	}

	sort(cost, cost + townNum);

	for (int i = 0; i < townNum - 1; i++) {
		min += cost[i];
	}

	cout<<min<<endl;


	delete[] cost;

	return 0;
}