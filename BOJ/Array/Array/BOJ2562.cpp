#if 0
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[9];
	int max, idx = 0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (i == 0) {
			max = arr[i];
		}
		else if (max < arr[i]) {
			max = arr[i];
			idx = i;
		}
	}

	cout << max << "\n" << idx + 1;

	return 0;
}
#endif