#if 0
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, max = 0;
	float sum = 0;
	cin >> n;
	int* arr = new int[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	for (int i = 0; i < n; i++) {
		sum += (float)arr[i] / max * 100;
	}
	delete[] arr;

	cout <<	sum / n;

	return 0;
}
#endif