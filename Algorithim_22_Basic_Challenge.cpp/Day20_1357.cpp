#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {

	string num1, num2;
	int answer;

	cin >> num1 >> num2;

	reverse(num1.begin(), num1.end());
	int num1_reverse = stoi(num1);

	reverse(num2.begin(), num2.end());
	int num2_reverse = stoi(num2);
	
	
	int result = num1_reverse + num2_reverse;
	
	string result_reverse = to_string(result);

	reverse(result_reverse.begin(), result_reverse.end());
	answer = stoi(result_reverse);

	cout << result_reverse;

	return 0;
}