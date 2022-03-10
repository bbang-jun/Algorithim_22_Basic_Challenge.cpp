#include <stdio.h>

int main(void) {
	int N, left, right, sum, new_num = 0, temp = 0, cycle = 0; // new_num을 -1

	scanf("%d", &N);

	temp = N;

	while (1) {
		left = N / 10;
		right = N % 10;
		sum = (left + right) % 10; // sum이 10이상인 경우도 고려
		new_num = right * 10 + sum;
		N = new_num;
		cycle++;
		if (temp == new_num) {
			break;
		}
	}

	printf("%d", cycle);

	return 0;
}