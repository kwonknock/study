#if 0
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[42] = { 0 };
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		int n;
		cin >> n;
		arr[n % 42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (arr[i] != 0) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}
#endif