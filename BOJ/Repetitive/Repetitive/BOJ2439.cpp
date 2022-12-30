#if 0
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = n; i > 0; i--) {
		for (int j = 1; j < i; j++) {
			cout << " ";
		}
		for (int k = 0; k < (n - i + 1); k++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
#endif