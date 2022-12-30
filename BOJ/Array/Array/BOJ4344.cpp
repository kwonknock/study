#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int c, n;
	cin >> c;
	
	for (int i = 0; i < c; i++) {
		cin >> n;
		int* arr = new int[n];
		int cnt = 0;
		float sum = 0;

		for (int j = 0; j < n; j++) {
			cin >> arr[j];
			sum += arr[j];
		}

		for (int j = 0; j < n; j++) {
			if (arr[j] > sum / n) {
				cnt++;
			}
		}
		delete[] arr;

		cout << fixed;
		cout.precision(3);

		cout << (float)cnt / n * 100 << "%" << "\n";
	}

	return 0;
}