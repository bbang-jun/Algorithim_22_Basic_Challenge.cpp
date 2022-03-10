#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {

	int w_univ[10];
	int k_univ[10];
	int w_result, k_result;

	for (int i = 0; i < 10; i++) {
		cin >> w_univ[i];
	}

	sort(w_univ, w_univ + 10);

	w_result = w_univ[7] + w_univ[8] + w_univ[9];

	for (int j = 0; j < 10; j++) {
		cin >> k_univ[j];
	}

	sort(k_univ, k_univ + 10);

	k_result = k_univ[7] + k_univ[8] + k_univ[9];

	cout << w_result << " " << k_result;

	return 0;
}