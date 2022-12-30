#if 0
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, max, min = 0;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		
		if (i == 0) {
			max = arr[0];
			min = arr[0];
		}
		else if (max < arr[i]) {
			max = arr[i];
		}
		else if (min > arr[i]) {
			min = arr[i];
		}
	}
	delete[] arr;

	cout << min << " " << max;

	return 0;
}
#endif