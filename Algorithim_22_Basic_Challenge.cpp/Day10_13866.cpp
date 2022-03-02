#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int arr[4] = { 0 };

	int firstTeam, secondTeam;

	for (int i = 0; i < 4; i++)
		cin >> arr[i];

	sort(arr, arr + 4);

	firstTeam = arr[1] + arr[2];

	secondTeam = arr[0] + arr[3];

	if (firstTeam > secondTeam)
		cout << firstTeam - secondTeam << endl;
	else if (firstTeam < secondTeam)
		cout << secondTeam - firstTeam << endl;
	else
		cout << firstTeam - secondTeam << endl;

	return 0;
}