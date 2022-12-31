#include <iostream>

using namespace std;

bool checkNum(int _n)
{
	if (_n < 100) {
		return true;
	}
	else if (_n == 1000) {
		return false;
	}
	
	int d = (_n % 10) - ((_n % 100) / 10);
	
	int d2 = ((_n % 100) / 10) - ((_n % 1000) / 100);
	
	if (d == d2) {
		return true;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		if (checkNum(i + 1)) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}