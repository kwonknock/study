#if 0
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[31] = { 0 };
	int cnt = 0;

	for (int i = 0; i < 28; i++) {
		int n;
		cin >> n;
		arr[n]++;
	}

	for (int i = 1; i <= 30; i++) {
		if (arr[i] == 0) {
			cout << i << "\n";
			cnt++;
		}
		if (cnt == 2) {
			break;
		}
	}

	return 0;
}
#endif