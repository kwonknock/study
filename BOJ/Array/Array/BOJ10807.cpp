#if 0
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, t, arr[101], cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> t;

	for (int i = 0; i < n; i++) {
		if (arr[i] == t) {
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}
#endif