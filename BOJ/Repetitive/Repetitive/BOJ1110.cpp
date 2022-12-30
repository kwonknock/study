#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, temp, buf, cnt = 0;
	
	cin >> n;

	if (n < 10) {
		n *= 10;
	}

	temp = (n / 10) + (n % 10);
	buf = (n % 10) * 10 + (temp % 10);

	while (n != buf) {
		cnt++;
		temp = (buf / 10) + (buf % 10);
		buf = (buf % 10) * 10 + (temp % 10);
	}
	cout << cnt + 1;

	return 0;
}