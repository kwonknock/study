#if 0
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, a, b;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << (a + b) << "\n";
	}

	return 0;
}
#endif