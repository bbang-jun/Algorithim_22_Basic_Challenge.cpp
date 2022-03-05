#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	string num1, num2;

	cin >> num1 >> num2;

	for (int i = 0; i < num1.size(); i++) {
		if (num1[i] == '6')
			num1[i] = '5';
	}
	for (int i = 0; i < num2.size(); i++) {
		if (num2[i] == '6')
			num2[i] = '5';
	}
	cout << stoi(num1) + stoi(num2)<<" ";

	for (int j = 0; j < num1.size(); j++) {
		if (num1[j] == '5')
			num1[j] = '6';
	}

	for (int j = 0; j < num2.size(); j++) {
		if (num2[j] == '5')
			num2[j] = '6';
	}
	cout << stoi(num1) + stoi(num2);


	return 0;
}