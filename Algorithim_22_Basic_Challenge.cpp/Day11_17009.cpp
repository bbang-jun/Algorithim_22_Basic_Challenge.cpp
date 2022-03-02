#include <iostream>
using namespace std;

int main(void)
{
	int A[3] = { 0 };
	int B[3] = { 0 };
	int sumOfA, sumOfB = 0;

	for (int i = 0; i < 3; i++)
		cin >> A[i];
		
	sumOfA = A[0] * 3 + A[1] * 2 + A[2] * 1;
		

	for (int j = 0; j < 3; j++)
		cin >> B[j];
	
	sumOfB = B[0] * 3 + B[1] * 2 + B[2] * 1;
		
	if (sumOfA > sumOfB)
		cout << "A" << endl;
	else if (sumOfA < sumOfB)
		cout << "B" << endl;
	else
		cout << "T" << endl;


	return 0;
}