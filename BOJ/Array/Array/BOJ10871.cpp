#if 0
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x, arr[10001], res[10001], cnt = 0;
	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < x) {
			res[cnt] = arr[i];
			cnt++;
		}
	}

	for (int i = 0; i < cnt; i++) {
		cout << res[i] << " ";
	}

	return 0;
}
#endif