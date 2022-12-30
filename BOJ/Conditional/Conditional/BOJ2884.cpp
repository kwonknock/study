#if 0
#include <iostream>

using namespace std;

int main() {

	int h, m;

	cin >> h >> m;

	if (m >= 45) {
		cout << h << " " << (m - 45);
	}
	else {
		m += 15;
		if (h == 0) {
			cout << 23 << " " << m;
		}
		else {
			cout << (h - 1) << " " << m;
		}
	}

	return 0;
}
#endif