#if 0
#include <iostream>

using namespace std;

int makeNum(int _t) {

	int n = 1;
	int add, sum, cnt = 0;
	int temp = _t;

	while (_t / n > 0) {
		n *= 10;
		cnt++;
	}
	n /= 10;
	sum = temp;
	for (int i = 0; i < cnt; i++) {
		add = temp / n;
		temp -= add * n;
		sum += add;
		n /= 10;
	}

	return sum;
}

void findSelfNum() {
	int arr[10030] = { 0 };
	for (int i = 1; i <= 10000; i++) {
		arr[makeNum(i)]++;
	}
	for (int i = 1; i <= 10000; i++) {
		if (arr[i] == 0) {
			cout << i << endl;
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	findSelfNum();

	return 0;
}
#endif