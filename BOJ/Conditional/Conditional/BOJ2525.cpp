#if 0
#include <iostream>

using namespace std;

int main() {

	int h, m, t;

	cin >> h >> m;
	cin >> t;

	h += (t / 60);
	m += (t % 60);

	if (m >= 60) {
		h += 1;
		m = m % 60;
	}

	if (h >= 24) {
		h = h % 24;
	}

	cout << h << " " << m;

	return 0;
}
#endif